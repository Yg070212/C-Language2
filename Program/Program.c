#include <stdio.h>

#define SIZE 10

int main()
{
	const char* dialog[SIZE];

	dialog[0] = " �ȳ��ϼ���?";
	dialog[1] = " ��������?";
	dialog[2] = " Ž���Դϴ� ����� �ִٰ� �ؼ� �Խ��ϴ�.";
	dialog[3] = " �߿��̽��ϴ� ������ �����ϴ�.";
	dialog[4] = " ��ǿ� ���� �������ּ���.";
	dialog[5] = " ���� �������� ������� ������� �ֽ��ϴ�.";
	dialog[6] = " �װ����� �ȳ����ּ���.";
	dialog[7] = " �� ���� �ȳ��ϰڽ��ϴ�.";
	dialog[8] = " ���Ⱑ ����� ������ ����ΰ���? �ܼ��� �� ���� �� �ִ� �� ã�ƺ��ڽ��ϴ�.";
	dialog[9] = " �� �������ּ���~";

	for (int i = 0; i < SIZE; i++)
	{
		printf("%s\n", dialog[i]);
	}

	return 0;
}