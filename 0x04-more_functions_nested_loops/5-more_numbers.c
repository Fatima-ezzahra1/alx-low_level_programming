#include "main.h"
#include <stdio.h>
/**
  * more_numbers -  prints 10 times the numbers, from 0 to 14
  * Return: void
  */
void more_numbers(void)
{
	char a;
	char b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				putchar(b / 10 + '0');
			}
			putchar(b % 10 + '0');
		}
		putchar('\n');
	}
}
