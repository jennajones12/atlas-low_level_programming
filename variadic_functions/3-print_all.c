#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - A function prints anyting.
 * @format: A list of type of arguments passed to the function.
 * Return: Nothing
 */
void print_all(const char * const format, ...) {
    va_list args;
    unsigned int i = 0;
    char *s;
    char format_type;

    va_start(args, format);

    while (format && format[i]) {
        format_type = format[i++];
        switch (format_type) {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                s = va_arg(args, char *);
                if (s == NULL) {
                    printf("(nil)");
                    break;
                }
                printf("%s", s);
                break;
            default:
                continue;
        }
        if (format[i])
            printf(", ");
    }

    printf("\n");
    va_end(args);
}
