#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that corresponds to the operator,
 * or NULL if the operator is not valid
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	if (i != 1)
		return (NULL);

	/* An array of function pointers corresponding to each operator */
	int (*ops[5])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	/* An array of characters representing the valid operators */
	 char ops_chars[] = {'+', '-', '*', '/', '%'};

	 i = 0;
	 while (i < 5)
	 {
		 if (*s == ops_chars[i])
			 return (ops[i]);
		 i++;
	 }
	 
	 return (NULL);
}
