#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 12;
	int k = 10;
	printf("Сейчас %d часов %d минут 00 секунд\n", n, k);
	printf("Идет %d минута суток\n", 60 * n + k);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - n, 60 - k);
	printf("С 8.00 прошло %d секунд\n", (n - 8) * 3600 + k * 60);
	printf("Текущий час = %d/24 суток  и текущая минута = %d/60 часа", n, k);
}