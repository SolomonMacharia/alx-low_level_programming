#include <stdio.h>

/**
 * main - prints alphabet in lowercase then uppercase followed by new line.
 *
 * Return: Always (Success)
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}

for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
