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
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
