#include <stdio.h>
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
	return 0;
}