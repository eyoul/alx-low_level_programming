#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c, i;

c = i = '0';

for (c = '0'; c <= '8'; c++)
{
for (i = '0'; i <= '9'; i++)
{
putchar(c);
putchar(i);

if ((c != '8') || (c == '9' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
