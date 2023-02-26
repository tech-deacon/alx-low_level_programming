#include <stdio.h>
/**
 * main - print somethong inputed
 *
 * Description: using the main function
 * the program prints accurqate
 * Return: 0
 */
int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
