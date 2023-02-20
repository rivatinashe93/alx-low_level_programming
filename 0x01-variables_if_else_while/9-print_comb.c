#include <stdio.h>

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* print the first digit */
if (i != 9) /* don't print the comma after the last digit */
{
putchar(','); /* print the comma */
putchar(' '); /* print the space */
}
}
putchar('\n'); /* print the newline character */
return (0);
}

