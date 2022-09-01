#include <stdio.h>

int main()
{
int n = 7;
while (n > 0)
{
n--;
if (n == 5)
	continue;
printf("%d\n", n);
}
return(0);
}
