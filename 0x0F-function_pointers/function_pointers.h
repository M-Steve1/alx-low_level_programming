#ifndef FILENAME_H
#define FILENAME_HI
#define FILENAME __FILE__
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FILENAME_H */
