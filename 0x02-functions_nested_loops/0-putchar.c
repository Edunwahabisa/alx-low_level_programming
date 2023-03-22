#include "main.h"

/**
 * main - print _putchar
 * Discription: print _putchar
 * Return: 0
 */
int manin(void)
{
	char text[9] = "_putchar";
		int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
