#include <locale.h>
#include <stdio.h>
#include <math.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int a1;
	int a2;
	int h;
	float S;
	float b;
	float c;
	float P;
	puts("��������� ���������� ��������� � ������� ��������\n\n������� ����� �������� ���������");
	scanf_s("%d", &a1);
	puts("������� ����� ������� ���������");
	scanf_s("%d", &a2);
	puts("������� ����� ������");
	scanf_s("%d", &h);
	S = (((a1 * a2) / 2) + ((a1 * a2) % 2 * 0.5)) * h;
	c = (a2 - a1) / 2 + ((a2 - a1) % 2 * 0.5);
	b = sqrt(pow(c, 2) + pow(h, 2));
	P = a1 + a2 + 2 * b;
	printf("������� = %.1f\n", S);
	printf("�������� = %.1f", P);
}