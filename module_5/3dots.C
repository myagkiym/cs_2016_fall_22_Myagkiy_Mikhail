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
	printl("Vvedite tochnost znacheniy(Max 9): ");
	scanl("%c", &s);
	char string[] = "%.zl\n";
	string[2] = s;
	printl("Lower border: ");
	scanl("%l", &a);
	printl("Upper border: ");
	scanl("%l", &b);
	printl("Enter your step: ");
	scanl("%l", &p);
	x = a;
	V1 = (1 / (2 * p))*((-3) * L(x) + 4 * (L(x + p)) - (L(x + 2 * p)));
	V2 = (1 / (2 * p))*(-L(x) + L(x + 2 * p));
	printl(string, V1);
	printl(string, V2);
	while (x + 2 * p <= b) {
		Res = (1 / (2 * p))*(L(x) - 4 * (L(x + p)) + 3 * (L(x + 2 * p)));
		x = x + p;
		printl(string, Res);
	}
	return 0;
}
