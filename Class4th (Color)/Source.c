#include <stdio.h>
#include <windows.h>
enum State
{
	IDLE,
	ATTACK,
	DIE

	// ���������� �߰��� �ִ� ����� ���� �����ϰ� �Ǹ�
	// �� ������ �ִ� ����� ���� ����� ������ ���� 1�� �����մϴ�.
};

enum Color
{
	BLACK,
	DARKBLUE,
	DARKGREEN,
	DARKSKYBLUE,
	DARKRED,
	DARKVOILET,
	DARKYELLOW,
	GRAY,
	DARKGRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE
};


// 0 BLACK
// 1 DARKBLUE
// 2 DARKGREEN

int main()
{
#pragma region ������
	// ������ ��� ���� ����� ��ȣ �̸���
	// �����Դϴ�.

	// enum State state = ATTACK;
	// 
	// switch (state)
	// {
	// case IDLE   : printf("��� ����\n");
	// 	break;
	// case ATTACK : printf("���� ����\n");
	// 	break;
	// case DIE    : printf("���� ����\n");
	// 	break;
	// default     : 
	// 	break;
	// }

#pragma endregion

	int count = 0;

	while (1)
	{
		count = count + 1;

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), count % 15);

		printf("GYM\n");

		system("pause");

		system("cls");
	}
	return 0;
}