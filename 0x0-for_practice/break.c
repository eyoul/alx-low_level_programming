#include <stdio.h>

int main(void)
{
int i = 5;
while (i > 0)
{
	if (i == 3)
		break;
	printf("%d\n", i);
	i--;
}
return (0);
}
