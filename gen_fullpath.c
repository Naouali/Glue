#include "glue.h"
/**
 * gen_fullpath - function to get the full path of the snap
 * @filename: name of the snapped file
 * @version: version number
 * Return: full path of the snap
 */

char *gen_fullpath(char *filename, int version, char *hold_var)
{
    char *hold_version;
    char *holdcopy;
    hold_version = my_itoa(version, hold_version);
    holdcopy = strcat(hold_version, filename);

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
    return (strcat(hold_var, holdcopy));
}