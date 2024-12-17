#include <stdio.h>
#include <windows.h>
enum State
{
	IDLE,
	ATTACK,
	DIE

	// 열거형에서 중간에 있는 상수의 값을 변경하게 되면
	// 그 다음에 있는 상수의 값이 변경된 값에서 부터 1씩 증가합니다.
};

// 0 BLACK
// 1 DARKBLUE
// 2 DARKGREEN

int main()
{
#pragma region 열거형
	// 고유한 상수 값에 연결된 기호 이름의
	// 집합입니다.

	// enum State state = ATTACK;
	// 
	// switch (state)
	// {
	// case IDLE   : printf("대기 상태\n");
	// 	break;
	// case ATTACK : printf("공격 상태\n");
	// 	break;
	// case DIE    : printf("죽음 상태\n");
	// 	break;
	// default     : 
	// 	break;
	// }

#pragma endregion

	SetConsoleTextASttribute(GetSTDHandle(STD_OUTPUT_HANDLE), 5);

	printf("GYM");

	return 0;
}