#ifndef FILENAME_H
#define FILENAME_H
#define FILENAME __FILE__

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function asscoiated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif /* FILENAME_H */
