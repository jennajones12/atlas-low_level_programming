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
	for (int i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}

return (0);
}
