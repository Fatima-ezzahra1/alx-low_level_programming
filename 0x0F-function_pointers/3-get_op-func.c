#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - select the correct asked function to be performed
 * @s: The argument
 * Return: A pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int a = 0;

	while (ops[a].op != NULL && *(ops[a].op) != *s)
		a++;
	return (ops[a].f);
}
