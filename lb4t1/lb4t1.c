#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	char c;
	int i;
	float f;
	double d;
	puts("������� ������");
	scanf_s("%c", &c);
	puts("������� ����� �����");
	scanf_s("%d", &i);
	float i1 = (float)i;
	puts("������� ����� � ��������� ������");
	scanf_s("%f", &f);
	puts("������� ������ ����� � ��������� ������");
	scanf_s("%lf", &d);
	printf("\n%c  %d  %.3f  %.3lf\n1/�������� ����� ����� = %f\n", c, i, f, d, 1 / i1);
}