#include <stdio.h>
#include <stdlib.h>
#include "glue.h"

void copy(char *filename, char *dirname)
{
    FILE * file_to_read;
    FILE *file_to_write;
    char c;
    char *pathname;


    pathname = concate(dirname, filename);
    printf("%s\n", pathname);
    file_to_read = fopen(filename, "r");
    file_to_write = fopen(dirname, "w+");
    while ((c=fgetc(file_to_read)) != EOF)
    {
        fputc(c, file_to_write);
    }
    fclose(file_to_read);
    fclose(file_to_write);
}
