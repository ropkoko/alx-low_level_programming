#include "main.h"

 /**
  * _strlen - check the length of a string
  * @s: string to be checked
  * Return: the lenght of the string
  *
  */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
