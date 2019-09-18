B#include <stdio.h>

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

puts("Size of a char:%lu", sizeof(chartype), " byte(s)\n"); 
puts("Size of an int:%lu", sizeof(inttype), " byte(s)\n");
puts("Size of a long int:%lu", sizeof(longinttype), " byte(s)\n");
puts("Size of a long long int:%lu", sizeof(longlonginttype), " byte(s)\n");
puts("Size of a float:%lu", sizeof(floattype), " byte(s)\n");
return (0);
}
