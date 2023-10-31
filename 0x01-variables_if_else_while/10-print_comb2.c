#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num < 100; num++)
{
putchar((num / 10) + '0');
putchar((num % 10) + '0');
if (num != 99)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
