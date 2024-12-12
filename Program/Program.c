#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void Shuffle(int array [], int size)
{
	for (int i = 0; i < size; i++)
	{
		int range = rand() % size;

		int temporary = array[range];
		array[range] = array[i];
		array[i] = temporary;
	}
}

void View(int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("��");
	}
	printf("\n");
}

int main()
{
#pragma region rand() �Լ�

	// seed ���� ���� rand�� ���� �ٲ�� �˴ϴ�.
	// srand(time(NULL));
	// 
	// int random = rand()% 10 + 1;
	// 
	// printf("random ������ �� : %d\n", random);

#pragma endregion

#pragma region ���� �Լ�

	// srand(time(NULL));
	// 
	// int list[SIZE] = { 1, 2, 3, 4, 5 };
	// 
	// Shuffle(list, SIZE);
	// 
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	printf("%d", list[i]);
	// }
#pragma endregion

#pragma region localtime() �Լ�
	// time_t currentTime = 0;
	// 
	// time(&currentTime);
	// 
	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d ��\n", timePointer->tm_year+1900);
	// printf("%d ��\n", timePointer->tm_mon+1);
	// printf("%d ��\n", timePointer->tm_mday);
	// printf("%d ����\n", timePointer->tm_wday);
	// 
	// switch (timePointer->tm_wday)
	// {
	// case 0: printf("�Ͽ���\n", timePointer->tm_wday);
	// 	break;
	// case 1: printf("������\n", timePointer->tm_wday);
	// 	break;
	// case 2: printf("ȭ����\n", timePointer->tm_wday);
	// 	break;
	// case 3: printf("������\n", timePointer->tm_wday);
	// 	break;
	// case 4: printf("�����\n", timePointer->tm_wday);
	// 	break;
	// case 5: printf("�ݿ���\n", timePointer->tm_wday);
	// 	break;
	// case 6: printf("�����\n", timePointer->tm_wday);
	// 	break;
	// }
	// 
	// printf("%d ��\n", timePointer->tm_hour);
	// printf("%d ��\n", timePointer->tm_min);
	// printf("%d ��\n", timePointer->tm_sec);
#pragma endregion

#pragma region UP - DOWN Game
	
	srand(time(NULL));

	int Health = 5;
	int answer = 0;
	int computer = rand() % 50 + 1;

	printf(" > Game Start < \n\n");

	while (Health > 0)
	{
		printf("ü�� : ");
		View(Health);

		printf("player : ");
		scanf_s("%d", &answer);

		if (answer == computer)
		{
			printf("\nV I C T O R Y\n");
			break;
		}
		else if (answer < computer)
		{
			printf("\ncomputer�� ������ �ִ� �� ���� �����ϴ�.\n");
			Health --;
		}
		else if (answer > computer)
		{
			printf("\ncomputer�� ������ �ִ� �� ���� Ů�ϴ�.\n");
			Health--;
		}
	}
	if (Health <= 0)
	{
		printf("\nD E F E A T\n");
	}
#pragma endregion


	return 0;
}