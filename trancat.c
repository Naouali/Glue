#include "glue.h"


/**
 * trancat - function to trancat filean directories names
 * @filename: string
 * return: new trancated name
 */

char * trancat(char *dest, char *source)
{
    
    int i;

    for (i = 0; source[i] != '\0'; i++)
    {
        dest[i] = source[i];
        if (source[i] == '.')
        break;
    }
    dest[i] = '\0';

    return (dest);

}
