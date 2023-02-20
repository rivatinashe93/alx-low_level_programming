#include <stdio.h>
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* convert i to its ASCII equivalent */
}
putchar('\n');
return 0;
}

