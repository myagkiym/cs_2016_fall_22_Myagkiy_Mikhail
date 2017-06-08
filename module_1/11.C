#include <stdio.h>
#include <math.h>
#include <string.h>

int StringTransform(char *a)
{
	
	int o, j, p = 0;
	j = strlen(a) - 1;
	for (o = 0; a[i] != '\0'; ++o)
	{
		if (a[o] == '1')
			p = p + pow(2, j);
		j--;
	}
	return p;
}
void main(void) 
{
	char S[100];
	printf("Insert a number ");
	gets(S);
	printf("%d\n", StringTransform(S));
}
