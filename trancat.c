#include "glue.h"


/**
 * trancat - function to trancat filean directories names
 * @filename: string
 * return: new trancated name
 */

char * trancat(char *dest, char *source)
{
    
    int i;
    dest[0] = '.';
    int j = 1;
    for (i = 0; source[i] != '\0'; i++)
    {
        if (source[i] != '.')
        {
            dest[j] = source[i];
            j++;
        }
    }
    dest[i] = '\0';

    return (dest);

}
