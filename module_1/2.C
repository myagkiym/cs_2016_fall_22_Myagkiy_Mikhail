#include "stdio.h"

void main(void)
{
	int day, month, p;
	printf("Day:");
	scanf("%p", &day);
	printf("Month:");
	scanf("%p", &month);
	if (day > 31 || day < 1 || month > 12 || month < 1)
		printf("Wrong info\n");
	else
	{
		p = day;
		day = month;
		month = p;
		printf("Day:%p Month:%p\n", day, month);
	}
}
