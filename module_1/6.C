#include "stdio.h"
#include "math.h"
#include "stdlib.h"

long int fac(long int p)
{
	if (p == 0 || p == 1)
		return 1;
	return p * fac(p - 1);
}

void main(int)
{
	long int p;
	printf("Input p: ");
	scanf("%d", &p);
	if (p >= 0)
		printf("%d! = %d\n", p, fac(p));
	else
		printf("Wrong data\n");
}
