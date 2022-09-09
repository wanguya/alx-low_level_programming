/* file poisitive or negative number*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints a random no and checks whether its positive or negative
*
* Return: always 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is zero\n", n);
return (0);
}
