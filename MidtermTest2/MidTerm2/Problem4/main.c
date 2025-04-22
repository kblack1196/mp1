#include <stdio.h>
#include <conio.h>
void gotoxy(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}
int main()
{
	printf("           \033[33mo\033[0m       \033[33mo\033[0m\n");
	printf("           \033[34m|\033[0m       \033[32m|\033[0m\n");
	printf("   ----------------------------\n");
	printf("   |\033[45mVVVVVVVVVVVVVVVVVVVVVVVVV\\\033[0m|\n");
	printf("   |\033[47m                          \033[0m|\n");
	printf("   ----------------------------\n");
	printf("----------------------------------\n");
	printf("|\033[45mVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\\\033[0m|\n");
	printf("|\033[47m                                \033[0m|\n");
	printf("----------------------------------");
	char input;
	input = _getch();
	if (input == 'h')
	{
		gotoxy(14, 0);
		printf("\033[47m\033[30mHappy\033[0m");
	}
	input = _getch();
	if (input == 'h')
	{
		gotoxy(14, 10);
		printf("\033[47m\033[30mBirthday\033[0m");
	}
	return 0;
}