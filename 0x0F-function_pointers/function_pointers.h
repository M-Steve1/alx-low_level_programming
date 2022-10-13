#include <stddef.h>
#ifndef FILENAME_H
#define FILENAME_H
#define FILENAME __FILE__
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FILENAME_H */
