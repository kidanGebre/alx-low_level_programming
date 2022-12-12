#include <stdio.h>
/*
 * Main - function contain
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'q' || lc != 'o')
		{
			putchar(lc);
		}
	}
	putchar('\n');
	return (0);
}
