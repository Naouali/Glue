#include <stdio.h>
#include <stdlib.h>


void copy(char *filename)
{
    FILE * file_to_read;
    FILE *file_to_write;
    char c;


    file_to_read = fopen(filename, "r");
    file_to_write = fopen("great", "w+");
    while ((c=fgetc(file_to_read)) != EOF)
    {
        fputc(c, file_to_write);
    }
    fclose(file_to_read);
    fclose(file_to_write);
}
