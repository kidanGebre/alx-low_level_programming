#include <stdio.h>
/**
 * main - function contain intiger from 0 to 9
 * Return: Always 0
 */
int main(void)
{
	int lc;

	for (lc = 0; lc < 10; lc++)
	{
		putchar((lc % 10) + '0');
	}
	putchar('\n');
	return (0);
}
