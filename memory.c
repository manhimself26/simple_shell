#include "shell.h"

/**
 * bfree - frees a pointer and nulls address
 * @ptr - address of pointer to free
 * Return: 1 if freed
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

