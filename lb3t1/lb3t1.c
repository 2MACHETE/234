#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int num;
	int S;
	puts("������� ������ �����");
	scanf_s("%d", &num);
	puts("������� ������ �����");
	scanf_s("%d", &S);
	printf("������� ����� %d � %i\n", num, S);
	printf("�����: % i\n��������: %i\n������������: %i\n�������: %i\n�������: %i\n", num + S, num - S, num * S, num / S, S % num);
}