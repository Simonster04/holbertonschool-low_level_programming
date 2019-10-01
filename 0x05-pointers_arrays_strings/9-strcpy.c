#include "holberton.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed to by src, including (\0), to the buffer pointed to by dest
 * @src: char pointer
 * @dest: char pointer
 * Return: No return.
 */

char *_strcpy(char *dest, char *src)
{

int j = 0;
int x;

while (src[j] != '\0')
{
j += 1;
}

for (x = 0; x <= j; x++)
{
dest[x] = src[x];
}
return(dest);

}
