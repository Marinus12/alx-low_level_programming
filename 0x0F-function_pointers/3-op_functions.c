#include "3-calc.h"

/**
  * op_add - calculates sum of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculates difference of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calculates product of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: product of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - calculates division of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: result of division of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - calculates remainder of division of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: remainder of the division of a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
