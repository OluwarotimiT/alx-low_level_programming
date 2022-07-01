#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - entry point
  * description - prints lowercase and uppercase
  * Retun: Always 0 (Success)
 */

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
