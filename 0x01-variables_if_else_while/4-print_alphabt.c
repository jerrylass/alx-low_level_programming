#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that returns all alphabet except e and q
 *
 * Return: 0 (SUccess)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
