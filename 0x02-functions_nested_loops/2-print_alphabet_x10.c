#include "main.h"

/**
 * print_alphabet_x10t -> prints the lowercase alphabets
 */

void print_alphabet_x10(void)
{
int j;
int n;

for (n = 0; n < 10; n++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
