#include <stdio.h>
 
void check(char ch)
{
 
    if (ch >= 'A' && ch <= 'Z')
        printf("\n%c is an UpperCase character",
               ch);
 
    else if (ch >= 'a' && ch <= 'z')
        printf("\n%c is an LowerCase character",
               ch);
 
    else
        printf("\n%c is not an alphabetic character",
               ch);
}
 
// Driver Code
int main()
{
    char ch;
 
    // Get the character
    ch = 'A';
 
    // Check the character
    check(ch);
 
    // Get the character
    ch = 'a';
 
    // Check the character
    check(ch);
 
    // Get the character
    ch = '0';
 
    // Check the character
    check(ch);
 
    return 0;
}
