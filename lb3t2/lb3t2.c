#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      C       2.32
int main()
{
	setlocale(LC_ALL, "Rus");
	int dym;
	float result;
	float result1;
	puts("������� ��������");
	scanf_s("%d", &dym);
	result = D * dym;
	result1 = C * dym;
	printf("%d ������ � ��� %.1f �� � %.1f ��������� ������", dym, result, result1);
}