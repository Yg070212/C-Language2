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

	SetConsoleTextASttribute(GetSTDHandle(STD_OUTPUT_HANDLE), 5);

	printf("GYM");

	return 0;
}