#include <stdio.h>
#include <Windows.h>

#define SIZE 10

int main()
{
	const char* dialog[SIZE];

	dialog[0] = " 안녕하세요?";
	dialog[1] = " 누구세요?";
	dialog[2] = " 탐정입니다 사건이 있다고 해서 왔습니다.";
	dialog[3] = " 잘오셨습니다 문제가 많습니다.";
	dialog[4] = " 사건에 대해 말씀해주세요.";
	dialog[5] = " 현재 마을에서 사람들이 사라지고 있습니다.";
	dialog[6] = " 그곳으로 안내해주세요.";
	dialog[7] = " 네 제가 안내하겠습니다.";
	dialog[8] = " 여기가 사람이 없어진 장소인가요? 단서가 될 만한 게 있는 지 찾아보겠습니다.";
	dialog[9] = " 네 수고해주세요~";

	for (int i = 0; i < SIZE; i++)
	{
		// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

		// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

		// 0x0002 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

		// 0x0003 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태

		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			printf("탐정 : ");
		}
		else
		{
			printf("의뢰인 : ");
		}

		printf("%s\n", dialog[i]);
	}

	return 0;
}