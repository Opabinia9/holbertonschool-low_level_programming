#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>

/**
 * get_op_func - find the function that corisponds to a given operator
 * @s: operator to find
 * Return: function that corisponds to operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
