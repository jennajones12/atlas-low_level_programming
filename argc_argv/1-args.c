#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arugments passed
 * @argv: value of arguments passed
 * return: always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc -1);
	return (0);
}
