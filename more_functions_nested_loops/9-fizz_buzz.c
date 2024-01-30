#include "main.h"
/**
 * print 1 to 100, if divisible by 3 fizz, if 5 buzz, if 15 fizzbuzz
 *
 * Return: 0
 */
void fizzBuzz() 
{
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
}
