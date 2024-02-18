#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	return (size > 0) ? (char *)memset(malloc(size), c, size) : (NULL);
}
