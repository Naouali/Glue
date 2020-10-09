#include "glue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * concate - function to concate two strings to create the direcory of the snapfile's name
 * @first: first string
 * @second: second string to add to the first
 * Return: new string
 */


char * concate(char *first, char *second)
{
    int i, j;
    i = 0;
    int number_of_folders = 0;
    char number_of_files[1000];
    char *hold_int;

    /* loop throw th directory */
    struct dirent *entry = NULL;
    DIR *dp = NULL;
    /* first is the directory's name in which the snap gonna be saved */
    dp = opendir(first);
    if (dp != NULL) {
        while ((entry = readdir(dp)))
            number_of_folders++;
    }
    closedir(dp);
    hold_int = my_itoa(number_of_folders, number_of_files);
    while (first[i] != '\0')
    {
        i++;
    }
    first[i] = '/';
    i++;
    first[i] = *hold_int - 1;
    i++;
    for (j = 0; second[j] != '\0'; j++)
    {
        first[i] = second[j];
        i++;
    }
    i++;
    first[i] = '\0';
    printf("Snap created successfully!\n");
    return (first);
}
