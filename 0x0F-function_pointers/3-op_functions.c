#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two number
 * @a: the first number
 * @b: the secound number
 *
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the multplication two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - the division of two number
 * @a: the first number
 * @b: the second number
 *
 * Return: result of division
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
 * op_mod - the modular of two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the remainder of the division
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
