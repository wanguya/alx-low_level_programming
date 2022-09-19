#include "main.h"
#include <stdio.h>
/**
 * int _strlen returns the length of a string
 *@s: the string
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
