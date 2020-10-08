#include "glue.h"


/**
 * concate - function to concate two strings
 * @first: first string
 * second: second string to add to the first
 * Return: new string
 */


char * concate(char *first, char *second)
{
    int i, j;
    i = 0;
    while (first[i] != '\0')
    {
        i++;
    }
    first[i] = '/';
    i++;
    for (j = 0; second[j] != '\0'; j++)
    {
        first[i] = second[j];
        i++;
    }
    first[i] = '\0';
    return (first);
}
