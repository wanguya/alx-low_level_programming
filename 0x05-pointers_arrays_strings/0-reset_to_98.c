#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int *n;

	n = 402;
	*n = &n;
	*n = 98;
	return (0);
}
