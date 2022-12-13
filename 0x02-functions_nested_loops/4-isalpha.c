#include "main.h"
/**
 * _isalpha - maninn jhk jsd
 * Return: 1 if c is a letter, lowercase or uppercase otherwise 0
 * 'c' - is char
 */
int _isalpha(int c)
{
	char c;

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
