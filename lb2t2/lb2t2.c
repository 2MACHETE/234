#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int n = 12;
	int k = 10;
	printf("������ %d ����� %d ����� 00 ������\n", n, k);
	printf("���� %d ������ �����\n", 60 * n + k);
	printf("�� �������� �������� %d ����� � %d �����\n", 23 - n, 60 - k);
	printf("� 8.00 ������ %d ������\n", (n - 8) * 3600 + k * 60);
	printf("������� ��� = %d/24 �����  � ������� ������ = %d/60 ����", n, k);
}