#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument value
 *
 * Return: 0 on success, 1 if the program does not receive two arguments
 */
int atoi(const char *str);
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
