#include "fucntion_pointers.h"

/**
 * ptinr_name - a fucntion that prints a name
 * @name: the name given
 * @f: function of the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
