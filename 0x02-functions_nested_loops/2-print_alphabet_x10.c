#include<stdio.h>
/**
 *main - check the code
 *
 * Return: always 0.
 *
 * print_alphabet_x10(void) is a prototype
 */
int print_alphabet_x10(void);
int  main(void)
{
printf("print_alphabet_x10(void)\n");
return (0);
}

int print_alphabet_x10(void)
{
char c;
int i = 0;
while (i <= 9)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
		putchar('\n');
		i++;
}
}
