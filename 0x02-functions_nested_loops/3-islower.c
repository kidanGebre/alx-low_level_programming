#include "main.h"
/**
 *
 * _islower - function
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
