#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("               *******************************************");
	puts("               *                                         *");
	puts("               * тема: Разработка консольного приложения *");
	puts("               *     Выполнил Комаров Н.С.               *");
	puts("               *                                         *");
	puts("               *******************************************");
	return 0;
}