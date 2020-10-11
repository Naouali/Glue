#include "glue.h"

/**
 * int_to_str - function to convert an integer to a string
 * @n: take integer n
 * Return: string
 */

char *int_to_str(int n)
{
    char *s = malloc(sizeof(char));

    sprintf(s, "%d", n);
    return (s);
}