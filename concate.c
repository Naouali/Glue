#include "glue.h"


/**
 * concate - function to concate two strings to create the snapfile's name
 * @first: first string
 * @second: second string to add to the first
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
    first[i] = '1';
    i++;
    for (j = 0; second[j] != '\0'; j++)
    {
        first[i] = second[j];
        i++;
    }
    i++;
    first[i] = '\0';
    return (first);
}
