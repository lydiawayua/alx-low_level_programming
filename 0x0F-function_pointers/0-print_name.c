#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 *@f: function pointer
 * @name: name of the person
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
