#include "main.h"
/**
 * print_alphabet - Prints the lowercase English alphabet followed by newline.
 */
void print_alphabet(void)

{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
