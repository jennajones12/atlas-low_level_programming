#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arugments passed
 * @argv: value of arguments passed
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
