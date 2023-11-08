#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides number a by number b
 * @a: first number
 * @b: second number
 * Return: returns the result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the modulus of a number
 * @a: first number
 * @b: second number
 * Return: returns the remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
