#include <stdio.h>
#include <math.h>
float L(float x) {
	float func;
	func = x*x*x;
	return func;
}

int main()
{
	float p, x, a, b;
	float Res = 0;
	float V1 = 0;
	float V2 = 0;

	char s;
	printf("Vvedite tochnost znacheniy(Max 9): ");
	scanf("%c", &s);
	char string[] = "%.zl\n";
	string[2] = s;
	printf("Lower border: ");
	scanf("%l", &a);
	printf("Upper border: ");
	scanf("%l", &b);
	printf("Enter your step: ");
	scanf("%l", &p);
	x = a;
	V1 = (1 / (2 * p))*((-3) * L(x) + 4 * (L(x + p)) - (L(x + 2 * p)));
	V2 = (1 / (2 * p))*(-L(x) + L(x + 2 * p));
	printf(string, V1);
	printf(string, V2);
	while (x + 2 * p <= b) {
		Res = (1 / (2 * p))*(L(x) - 4 * (L(x + p)) + 3 * (L(x + 2 * p)));
		x = x + p;
		printf(string, Res);
	}
	return 0;
}
