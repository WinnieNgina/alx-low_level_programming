#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: - function printing
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
