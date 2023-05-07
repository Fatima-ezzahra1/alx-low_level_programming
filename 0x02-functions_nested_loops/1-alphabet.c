#include "main.h"
/**
  *main - Entry point
  *Description:  print_alphabet() - print all alphabet in lowercase
  */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
