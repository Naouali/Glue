#include <stdio.h>
#include <stdlib.h>
#include "glue.h"

/**
 * copy - function to copy a file into another file
 * @filename: file to be copied
 * @dirname: directory in which to output the copy
 * Return: Nothing
 */
 
void copy(char *filename, char *dirname)
{
    FILE * file_to_read;
    FILE *file_to_write;
    char c;
    char *pathname;


    pathname = concate(dirname, filename);
    file_to_read = fopen(filename, "r");
    file_to_write = fopen(dirname, "w+");
    while ((c=fgetc(file_to_read)) != EOF)
    {
        fputc(c, file_to_write);
    }
    fclose(file_to_read);
    fclose(file_to_write);
}
