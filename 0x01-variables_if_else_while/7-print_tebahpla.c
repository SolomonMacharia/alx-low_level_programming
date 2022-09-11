#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always (Success)
 */

int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
}
