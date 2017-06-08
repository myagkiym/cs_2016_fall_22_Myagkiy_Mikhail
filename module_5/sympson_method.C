#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define N 10000

double L(double x)
{
	double l;
	l = sin(x) + cos(x);
	return l;
}

int main()
{
	char m;
	printf("Vvedite tochnost otveta(Max:9): ");
	scanf("%c", &m);
	char string[] = "%.zl\n";
	string[2] = m;

	float Int = 0, x, a, b, p;
	const double Pi = 3.14159;
	printf("Lower border : ");
	scanf("%l", &a);
	printf("Upper border: ");
	scanf("%l", &b);
	p = (b - a) / N;
	x = a + p;
	while (x < b)
	{
		Int = Int + 4 * L(x);
		x = x + p;
		if (x >= b) 
			break;
		Int = Int + 2 * L(x);
		x = x + p;
	}
	Int = (p / 3)*(Int + L(a) + L(b));
	printf(string, Int);
	return 0;
}
