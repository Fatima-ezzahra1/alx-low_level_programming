#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Task11'
  *Return: Always 0
  */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (o = m + 1; o <= 9; o++)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (n != 7 || m != 8 || o != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
