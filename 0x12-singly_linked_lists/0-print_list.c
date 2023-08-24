#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: pointer to the list_tto print
 * Return: Num of the nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %a\n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
