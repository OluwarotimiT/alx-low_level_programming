#include <unistd.h>
#include "main.h"

/**
 * main - check description
 * Description: a program that prints _putchar, followed by a new line
 * Return: always 0 (Success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

for (i = 0; i < 9; i++)
_putchar (word[i]);
_putchar ('\n');

return (0);
}
