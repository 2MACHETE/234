#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int n = 2;
	float N = 2;
	int L = 331;
	int l = 331;
	int k = 3;
	int m = 3;
	printf("Дано:\n%12i\n%12i\n\t__________\nОтвет:\n\t+00%-.3f\n", n, L, N / l);
}