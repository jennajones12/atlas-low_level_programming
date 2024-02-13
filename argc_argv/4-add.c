#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: counter for arguments
 * @argv: value for arguments
 * Return: 0 on success, 1 on error.
 */

int atoi(const char *str);
int main(int argc, char **argv)
{
	int result = 0;

	if (argc < 2)
	{
		printf("Error: No input\n");
		return (1);
	}

	while (*++argv)
	{
		char *ptr = *argv;
		while (*ptr)
		{
			if (!isdigit(*ptr))
			{
				printf("Error: Invalid input\n");
				return (1);
			}
			ptr++;
		}
		result += atoi(*argv);
	}
	
	printf("%d\n", result);
	return (0);
}
