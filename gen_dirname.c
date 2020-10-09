#include "glue.h"



/**
 * gen_dirname - function to recreate path name for a given snap from it's name
 * @filename: filename to generate a path from it
 * Return: path name
 */

char *gen_dirname(char *hold_var, char *filename)
{
    int i;
    hold_var[0] = '.';
    int j = 1;
    for (i = 0; filename[i] != '\0'; i++)
    {
        if (filename[i] != '.')
        {
            
            hold_var[j] = filename[i];
            j++;
        }
        
    }
    *(hold_var + j) = '/';
    j++;
    *(hold_var + j) = '\0';
    return (hold_var);

}

