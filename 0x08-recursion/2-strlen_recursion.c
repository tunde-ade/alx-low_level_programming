#include "main.h"
/**
 * _strlen_recursion - Return len of a str
 * @s: str to be measured
 * Return: The length of a str
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
