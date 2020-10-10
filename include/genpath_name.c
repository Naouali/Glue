#include "glue.h"


/**
 * genpath_name - function to generate a path name from a filename
 * @filename: file bu which , a path will be generated
 * Return: pointer to a string
 */

char *genpath_name(char *filename)
{
    /* path should be generated using this format*/
    /* filename = main.c */
    /*pathname = /mainc/main.c/ */
    /* if file already exis, copies should be indexed */
    int i;
    int j = 1;
    char *fullpath;
    char *path = malloc(sizeof(char) * strlen(filename));
    if (path == NULL)
    {
        printf("Failed th allocate memory to path");
        return (0);
    }
    path[0] = '.';
    for (i = 0; i < strlen(filename); i++)
    {
        if (filename[i] != '.')
        {
            path[j] = filename[i];
            j++;
        }
    }
    path[j] = '/';
    j++;
    path[j] = '\0';
    fullpath = strcat(path, filename);
    return (fullpath);
}
