#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success, 98 for incorrect number of arguments,
 * 99 for invalid operator, and 100 for division by zero
 */

int main(int argc, char *argv[])
{
	int number1, number2, result;
	int (*function_pointer)(int, int);

	/* Check if the number of command line arguments is not equal to 4 */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
		/* Exit the program with status code 98 for incorrect number of arguments */
	}

	/* Convert the first and third command line arguments to integers */
	number1 = atoi(argv[1]);
	number2 = atoi(argv[3]);
	/* Get a pointer to the appropriate operation function based on the */
	/* operator argument */
	function_pointer = get_op_func(argv[2]);
	/* Check if function_pointer is NULL (invalid operator) or if */
	/* there are additional characters in the operator string */
	if (function_pointer == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
		/* Exit the program with status code 99 for an invalid operator */
	}
	/* Check if the operator is division or modulo (/ or %) and */
	/* if the second number is zero */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && number2 == 0)
	{
		printf("Error\n");
		exit(100);
		/* Exit the program with status code 100 for division by zero */
	}
	/* Perform the selected operation using the function pointer */
	/* obtained from get_op_func */
	result = function_pointer(number1, number2);
	/* Print the result of the operation */
	printf("%d\n", result);

	return (0); /* Exit the program with status code 0 on success */
}
