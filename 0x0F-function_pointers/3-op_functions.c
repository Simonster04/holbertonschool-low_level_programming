#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_add(int a, int b)
{return (a + b); }

/**
 * op_sub - difference
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_sub(int a, int b)
{return (a - b); }

/**
 * op_mul - product
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_mul(int a, int b)
{return (a * b); }

/**
 * op_div - division
 * @a: integer
 * @b: integer
 *
 * Return: integer
 */

int op_div(int a, int b)
{return (a / b); }

/**
 * op_mod - modulo
 * @a: integer
 * @b: integer
 * Return: integer
 */

int op_mod(int a, int b)
{return (a % b); }
