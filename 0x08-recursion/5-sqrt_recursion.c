#include "main.h"

int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function that returns natural sqr rt
 * @n: num to calculate the sqr root
 * Return: the square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural sqr rt
 * @n: num to calculate the sqr root
 * @i: iterator
 * Return: the square root result
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
