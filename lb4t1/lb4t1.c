#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	char c;
	int i;
	float f;
	double d;
	puts("¬ведите символ");
	scanf_s("%c", &c);
	puts("¬ведите целое число");
	scanf_s("%d", &i);
	float i1 = (float)i;
	puts("¬ведите число с плавающей точкой");
	scanf_s("%f", &f);
	puts("¬ведите второе число с плавающей точкой");
	scanf_s("%lf", &d);
	printf("\n%c  %d  %.3f  %.3lf\n1/введЄнное целое число = %f\n", c, i, f, d, 1 / i1);
}