#include <stdio.h>
int PassOrFail(int score)
{
	if (score >= 50)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	if (PassOrFail(100) == 1)
	{
		printf("����� �����ϴ�!");
	}
	else
	{
		printf("����� �ֽ��ϴ�");
	}
	return 0;
}