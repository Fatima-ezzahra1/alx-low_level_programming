#include "main.h"
#include <stdio.h>
/**
  * print_numbers - prints numbers from 0 to 9
  * Return: Always 0
  */
void print_numbers(void)
{
	char i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
}
