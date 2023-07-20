#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - this function returns the sum of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this returns the difference of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - this also returns the product of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this returns the division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - this returns the remainder of division of two numbers.
 * @a: first number.
 * @b: second number.
 * Return: remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
