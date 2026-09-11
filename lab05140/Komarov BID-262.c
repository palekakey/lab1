#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void main()
{
setlocale(LC_CTYPE, "RUS");
puts("Тыкни");
getchar();
puts("Лена Головач");
return 0;

}
