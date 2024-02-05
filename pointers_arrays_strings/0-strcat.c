#include <main.h>

// Function to concatenate two strings
char* _strcat(char* dest, const char* src) {
    char* result = dest; // Store the starting address of dest

    // Move the pointer to the end of dest
    while (*dest != '\0') {
        dest++;
    }

    // Append characters from src to dest
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    // Add a terminating null byte
    *dest = '\0';

    return result; // Return the modified dest
}

int main() {
    char dest[100] = "Hello, ";
    const char* src = "world!";

    _strcat(dest, src);

    // Print the concatenated string
    char* concatenated = dest;
    while (*concatenated != '\0') {
        putchar(*concatenated);
        concatenated++;
    }

    return 0;
}
