#include <stdio.h> 
#include <conio.h>
void main(void)
{

	int i = 0, x = 0, y = 0; int c = 1;
	char p = 0;
	scanf("%d %c %d", &x, &p, &y);

	if (p == '+')
	{
		x = x + y;
		printf("%d\n", x);
	}
	else if (p == '-')
	{
		x = x - y;
		printf("%d\n", x);
	}
	else if (p == '/')
	{
		x = x / y;
		printf("%d\n", x);
	}
	else if (p == '%')
	{
		x = x % y;
		printf("%d\n", x);
	}
	else if (p == '^')
	{
		for (i = 0; i < y; i++)
			c = c * x;
		if (y == 0)
			printf("1\n");
		printf("%d\n", c);
	}
	else if (p == '*')
	{
		x = x * y;
		printf("%d\n", x);
	}
	else
		printf("incorrect\n");
}
