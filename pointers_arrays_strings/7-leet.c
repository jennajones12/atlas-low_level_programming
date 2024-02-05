#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @n: input string
 * Return: String that is encoded
 */
char *leet(char *n)
char leetMap[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char leetReplace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
{
int i = 0;

while (n[i] != '\0')
{
	int j = 0;

	while (j < 10)
	{
		if (n[i] == leetMap[j])
		{
			n[i] = leetReplace[j];
			break;
		}
		j++;
	}
	i++;
}
return (n);
}
