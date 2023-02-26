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
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
