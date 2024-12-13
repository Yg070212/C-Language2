#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void Position(int x, int y)
{
	// x축과 y축을 설정
	COORD position = { x, y };

	// 커서 위치를 이동하는 함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

int main()
{
	char key = 0;

	int x = 0;
	int y = 0;

	while (1)
	{
		Position(x, y);
		printf("★");

		key = _getch();

		if (key == -32)
		{
			key = _getch();
		}

		switch (key)
		{
		case UP   : y--;
			if (y < 0)
			{
				Position(5, 5);
			}
			break;
		case LEFT : x -= 2;
			if (x < 0)
			{
				Position(5, 5);
			}
			break;
		case RIGHT: x += 2;;
			if (x > 20)
			{
				Position(5, 5);
			}
			break;
		case DOWN : y++;
			if (y > 20)
			{
				Position(5, 5);
			}
			break;
		default   : printf("Exception\n");
			break;
		}

		system("cls");

	}




	return 0;
}