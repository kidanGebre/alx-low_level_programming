#include <stdio.h>
/**
 * main - function contain
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		if (lc != 'e')
		{
			if (lc != 'q')
			{
				putchar(lc);
			}
		}
	}
	putchar('\n');
	return (0);
}
