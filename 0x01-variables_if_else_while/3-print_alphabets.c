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
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (ch = 'A'; ch = 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
