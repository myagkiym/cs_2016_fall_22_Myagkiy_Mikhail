#include <stdio.h>

void main(void) 
{
	float x, y, a, b, c, d;
	printf("Enter 2 complex numbers a+bi,x+yi\n ");
	scanf("%f+%fi,%f+%fi", &x, &y, &a, &b);
	c = (x*x*a + x*a*a + x*b*b + a*y*y) / ((x + a)*(x + a) + (y + b)*(y + b));
	d = (x*x*b + a*a*y + y*y*b + y*b*b) / ((x + a)*(x + a) + (y + b)*(y + b));
	printf("(%.3f)+(%.3fi)\n", c, d);
}
