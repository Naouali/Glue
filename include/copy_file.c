#include "glue.h"


/**
 * copy_file - function to copy a file
 * @filename: file to be copied
 * Return: void
 */

void copy_file(char *filename)
{
    /*file is copied to a hidden file
    with the same name as the file in the current directory
    if the file is copied more than one time, the copies should be indexed*/

    FILE * original_file; /* oringinal file to be copied */
    FILE * copied_file; /* the copie of the file */
    char c; /* character to hold characters in the original file and output them in the copie */
    char *path; /* the path in which the copie should be stored, wil be created using a function */
    original_file = fopen(filename, "r"); /* open the original file in the read mode */
    /* first generated the path name and then create a directory with this name if not exists */
    // generate path name = directory name
    // call to makedir --= create a directory
    // get this directory nname and add it the copied file 's name
    copied_file = fopen(path, "w+"); /* create a copie file, in the specific directory */
    
    while ((c =fgetc(original_file)) != EOF)
    {
        fputc(c, copied_file);
    }
    fclose(original_file); /* close the origian file */
    fclose(copied_file) /* close the copied file */
}