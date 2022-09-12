#include<stdio.h>
/**
 * main - beggining of code
 *
 * Return: 0
 */
void print_alphabet(void);
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
	printf("%c ", ch);
	ch++;
}
return (0);
}
