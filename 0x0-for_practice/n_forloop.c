#include <stdio.h>

int main()
{
int i, j;
int x = 2;
int y = 5;
for (i = 1; i <= x; i++)
{
	for (j = 0; j<= y; j++)
	{
		printf("%d x %d = %d\n", i, j, i*j);
	}
	printf("\n");
}
}
