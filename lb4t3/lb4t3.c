#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	puts("������� ���������� �����");
	scanf_s("%d", &n);
	int c = n % 10;
	int a = n / 100;
	int b = (n % 100) / 10;
	printf("\n������ ����� %d, ������� - %d, ��������� - %d, ����� ���� = %d", a, b, c, a + b + c);
}