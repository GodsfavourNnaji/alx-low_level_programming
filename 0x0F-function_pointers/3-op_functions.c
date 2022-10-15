#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers @a and @b
 *
 * @a: A number
 *
 * @b: A number
 *
 * Return: Sum of @a and @b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the diference of @c and @b
 *
 * @b: A number
 *
 * @a: A number
 *
 * Return: Difference of @a and @b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: A number
 *
 * @b: A number
 *
 * Return: Product of @a and @b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides @a and @b
 *
 * @a: A number
 *
 * @b: A number
 *
 * Return: Quotient of @a and @b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Calculates the mod of @a and @b
 *
 * @a: A number 
 *
 * @b: A number
 *
 * Return: Remainder of @a divided by @b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
