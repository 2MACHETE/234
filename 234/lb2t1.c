#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n%3d\n%5d\n%7d\n", 1, 2, 3, 4);
	printf("%10.5f\n", 12.234657);
	printf("������� �� ������� %d �� %d ����� %d\n������������ %i � %i ����� %i\n", 7, 5, 7 % 5, 4, 2000, 4 * 2000);
	printf("%g ��������� �� %e ����� %f\n ", 5., 2., 5. / 2);
}