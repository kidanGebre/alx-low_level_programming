#include <stdio.h>
/*
 *Main- upprt lowwer
 *Return: always 0
 */
int main(void)
{
	char lc;
	char uc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	for (uc = 'a'; uc <= 'z'; uc++)
	{
		putchar(uc);
	}
	return (0);
}
