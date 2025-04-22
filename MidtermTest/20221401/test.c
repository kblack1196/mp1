#include <stdio.h>
#include <conio.h>
void gotoxy(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}
int main()
{
	char a;
	printf("                                           (\033[47m    \033[0m)\n");
	printf("                                           (\033[47m   \033[0m)\n");
	printf("                                          (\033[47m   \033[0m)\n");
	printf("                                          (\033[47m  \033[0m(         /\\\n");
	printf("                                           )\033[47m  \033[0m)       /  \\  /\\\n");
	printf("                   ________________________|\033[47m  \033[0m|__    /\\/\\/\\/  \\\n");
	printf("                  /\\\033[41m           ______      |\033[47m  \033[0m|\033[41m  \033[0m\\  /      \\/\\/\\\n");
	printf("         /\\      /\033[43m/_\033[0m\\\033[41m          \\    /\\     |\033[47m  \033[0m|\033[41m   \033[0m\\/            \\\n");
	printf("     /\\ /  \\    /\033[43m/___\033[0m\\\033[41m          \\\  /\033[43m  \033[0m\033[41m\\            \033[0m\\\n");
	printf("               /\033[43m/_____\033[0m\\\033[41m          \\\ |\033[44m[]\033[0m\033[41m|             \033[0m\\\n");
	printf("              /\033[43m/_______\033[0m\\\033[41m          \\\|\033[43m  \033[0m\033[41m|              \033[0m\\\n");
	printf("             /\033[43mxxxxxxxxxx\033[0m\\\033[41m \033[42m\033[45m나는 시험을 잘 보고있나?\033[0m\033[41m    \033[0m\\\n");
	printf("                                                                   \n");
	printf("                                                                   \n");
	printf("                                                                   \n");
	printf("                                                                   \n");
	printf("                                                                   .");
	while (1)
	{
		a = _getch();
		if (a == 'n')
		{
			gotoxy(30, 17);
			return 0;
		}
		else
		{
			if (a == 'y')
			{
				gotoxy(30, 10);
				printf("\033[44m                     ");
				gotoxy(30, 11);
				printf("                     ");
				gotoxy(30, 12);
				printf("\033[33m  당신 잘하고 있어 ! ");
				gotoxy(30, 13);
				printf("                     ");
				gotoxy(30, 14);
				printf("                     \033[0m");
			}
			else
			{
				gotoxy(30, 17);
				printf("\n\033[31m다시 입력해주세요!!!\033[0m");
			}
		}
	}
}