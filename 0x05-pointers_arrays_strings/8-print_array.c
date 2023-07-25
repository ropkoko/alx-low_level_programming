#include "main.h"

/**
 * print_array - a function that print and elements of an array
 * @a: array name
 * @n: is the number of element of thr array to be printed
 * Return: a and n inputs
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, '',a[i]);
	}
	if (i == (n - 1))
	{
		printf ("%d'', a[n - 1]);
	}
	print ("\n");
}
