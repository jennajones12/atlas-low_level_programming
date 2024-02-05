#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @c: String of variable pointer
 * Return: String that is encoded
 */
char *leet(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            str[i] = '4';
        } else if (str[i] == 'e' || str[i] == 'E') {
            str[i] = '3';
        } else if (str[i] == 'o' || str[i] == 'O') {
            str[i] = '0';
        } else if (str[i] == 't' || str[i] == 'T') {
            str[i] = '7';
        } else if (str[i] == 'l' || str[i] == 'L') {
            str[i] = '1';
        }
    }
    return str;
}
