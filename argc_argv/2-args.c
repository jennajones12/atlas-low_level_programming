#include "main.h"
#include <stdio.h>
/**
 * main - prints all arguments receieved
 * @argc: arugment counter
 * argv: argument values
 * return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)

{
	printf("%s\n", argv[i]);
	i++;
}
return (0);
}
