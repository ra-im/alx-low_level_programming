#ifndef CALC_H
#define CALC_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct op - structure of the operators.
 *
 * @op: the operator.
 * @f: function associated with the operator.
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /* ends the #ifndef CALC_H conditional */

