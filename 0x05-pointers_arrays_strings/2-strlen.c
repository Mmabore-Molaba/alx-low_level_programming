#include "main.h"
/**
*	_strlen - function that returns the length of a string.
*	@s: string pointer to pass to this function
*	Return: returns length of the string
*/
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; s++)
		;
	return (len);
}
