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
		printf("♥");
	}
	printf("\n");
}

int main()
{
#pragma region rand() 함수

	// seed 값에 따라서 rand의 값이 바뀌게 됩니다.
	// srand(time(NULL));
	// 
	// int random = rand()% 10 + 1;
	// 
	// printf("random 변수의 값 : %d\n", random);

#pragma endregion

#pragma region 셔플 함수

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

#pragma region localtime() 함수
	// time_t currentTime = 0;
	// 
	// time(&currentTime);
	// 
	// struct tm* timePointer = localtime(&currentTime);
	// 
	// printf("%d 년\n", timePointer->tm_year+1900);
	// printf("%d 월\n", timePointer->tm_mon+1);
	// printf("%d 일\n", timePointer->tm_mday);
	// printf("%d 요일\n", timePointer->tm_wday);
	// 
	// switch (timePointer->tm_wday)
	// {
	// case 0: printf("일요일\n", timePointer->tm_wday);
	// 	break;
	// case 1: printf("월요일\n", timePointer->tm_wday);
	// 	break;
	// case 2: printf("화요일\n", timePointer->tm_wday);
	// 	break;
	// case 3: printf("수요일\n", timePointer->tm_wday);
	// 	break;
	// case 4: printf("목요일\n", timePointer->tm_wday);
	// 	break;
	// case 5: printf("금요일\n", timePointer->tm_wday);
	// 	break;
	// case 6: printf("토요일\n", timePointer->tm_wday);
	// 	break;
	// }
	// 
	// printf("%d 시\n", timePointer->tm_hour);
	// printf("%d 분\n", timePointer->tm_min);
	// printf("%d 초\n", timePointer->tm_sec);
#pragma endregion

#pragma region UP - DOWN Game
	
	srand(time(NULL));

	int Health = 5;
	int answer = 0;
	int computer = rand() % 50 + 1;

	printf(" > Game Start < \n\n");

	while (Health > 0)
	{
		printf("체력 : ");
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
			printf("\ncomputer가 가지고 있는 값 보다 적습니다.\n");
			Health --;
		}
		else if (answer > computer)
		{
			printf("\ncomputer가 가지고 있는 값 보다 큽니다.\n");
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