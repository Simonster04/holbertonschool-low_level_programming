#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char chartype;
int inttype;
long int longinttype;
long long int longlonginttype;
float floattype;

printf("Size of a char:%ld byte(2)\n", sizeof(chartype));
printf("Size of an int:%ld byte(2)\n", sizeof(inttype));
printf("Size of a long int:%ld byte(2)\n", sizeof(longinttype));
printf("Size of a long long int:%ld byte(2)\n", sizeof(longlonginttype));
printf("Size of a float:%ld byte(2)\n", sizeof(floattype));
return (0);
}
