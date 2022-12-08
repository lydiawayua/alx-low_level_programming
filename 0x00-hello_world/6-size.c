#include <stdio.h>

/**
 * main - Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void
{
    char c:
    int d:
    long int 1d;
    long long int 11d;
    float f;

    printf("Size of char:%1u byte(s)\n", (unsigned long)sizeof(c));
    printf("Size of an int:%1ubyte(s)\n",(unsigned long)sizeof(d));
    printf("Size of a long int:%lubyte(s)\n",(unsigned long)sizeof(d));
    printf("Size of long int:%lu bytes(s)\n",(unsigned long)sizeof(11d));
    printf("Size of float:%lu bytes(s)\n",(unsigned long)sizeof(f));

    return (0);
    
 }
