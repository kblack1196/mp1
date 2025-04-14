#include <stdio.h>
#include <Windows.h>
void gotoxy(int x, int y)
{
    COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
    printf("\033[30m\033[43m나건우가 좋아하는\033[0m \033[41mCyberpunk 2077\033[0m\n\n");
    gotoxy(8, 2);
    printf("\033[30m\033[46mPress Any Key\033[0m\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    return 0;
}