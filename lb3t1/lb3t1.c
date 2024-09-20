#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int num;
	int S;
	puts("Введите первое число");
	scanf_s("%d", &num);
	puts("Введите второе число");
	scanf_s("%d", &S);
	printf("Введены числа %d и %i\n", num, S);
	printf("Сумма: % i\nРазность: %i\nПроизведение: %i\nЧастное: %i\nОстаток: %i\n", num + S, num - S, num * S, num / S, S % num);
}