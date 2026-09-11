#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

void name();
void date();

void main()
{
	name();
	date();

}
void name()
{
	setlocale(LC_CTYPE, "RUS");
	puts("               *******************************************");
	puts("               *                                         *");
	puts("               * тема: Разработка консольного приложения *");
	puts("               *     Выполнил Комаров Н.С.               *");
	puts("               *                                         *");
	puts("               *******************************************");

}
void date()
{
	puts("                  _, _,   ,__, __,   _, ,__, ,__, ,__,");
	puts("                   |  |   |  |   |    | |  | |  | |  |");
	puts("                  /   |   |  | --|   /  |  | |  | |--|");
	puts("                 |_,  |   |__| __|  |_, |__| |__| |__|");

}