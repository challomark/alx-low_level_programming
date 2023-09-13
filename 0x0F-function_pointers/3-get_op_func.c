#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: The operator passed as an argument to the program
 *
 * Return: A pointer to the corresponding function, or NULL if not found
 */
int (*get_op_func(char *s))(int, int)
{
	/* Define an array of structures that pair operators with functions */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* NULL-terminated entry to mark the end of the array */
	};

	int index = 0;

	/* Iterate through the 'ops' array until a match is found or until the end */
	while (ops[index].op != NULL)
	{
		/* Compare the input operator string 's' with the operator in the array */
		if (strcmp(ops[index].op, s) == 0)
			/* Return the corresponding function pointer if found */
			return (ops[index].f);
		index++; /* Move to the next element in the array */
	}

	return (NULL); /* Return NULL if the operator is not found in the array */
}
