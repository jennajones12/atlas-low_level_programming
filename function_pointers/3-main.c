#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 * Return: exits 0 normally, 98 on argc error, 99 on illegal operator
 */
int (*get_op_func(char *s))(int, int);

int main(int argc, char *argv[])
{
    int a, b, result;
    int (*func)(int, int);

    if (argc != 4)
    {
        printf("Usage: %s num1 operator num2\n", argv[0]);
        return 1;
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    func = get_op_func(argv[2]);

    if (!func)
    {
        printf("Error: Operator not recognized\n");
        return 1;
    }

    result = func(a, b);
    printf("%d\n", result);

    return 0;
}
