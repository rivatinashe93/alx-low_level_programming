#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j == 9 ? '\n' : ',');
putchar(j == 9 ? '\0' : ' ');
}
}
return (0);
}

