#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>

using namespace std;
//FS
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, x, e, Z, y;
	printf("input b: ");
	scanf_s("%lf", &b);
	printf("input x: ");
	scanf_s("%lf", &x);
	printf("input e: ");
	scanf_s("%lf", &e);
	printf("input Z: ");
	scanf_s("%lf", &Z);
	printf("input y: ");
	scanf_s("%lf", &y);
	a = (pow(b, 4)) / x + (pow(e, y - 1)) / ceil(5 * b + (pow(x, 3))) - cos(Z) + tan(15);
	printf("\n\t\t%lf\n", a);
	system("pause");
}

