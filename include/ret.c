#include "glue.h"


/**
 * ret - function to retrive a snap
 * @filename: file to be copied
 * Return: void
 */

void ret(char *filename, char *version)
{
    /*file is copied to a hidden file
    with the same name as the file in the current directory
    if the file is copied more than one time, the copies should be indexed*/

    FILE * original_file; /* oringinal file to be copied */
    FILE * copied_file; /* the copie of the file */
    char c; /* character to hold characters in the original file and output them in the copie */
    char *dir; /* the path in which the copie should be stored, wil be created using a function */
    char *pathname; /* name of the full path */
    char *ver_file;
    /*get dir name from, file name*/
    dir = genpath_name(filename);
    /*add version to file */
    ver_file = strcat(version, filename);
    /*get full path from dirname and filename*/
    pathname = strcat(dir, ver_file);

    original_file = fopen(pathname, "r"); /* open the original file in the read mode */
    /* first generated the path name and then create a directory with this name if not exists */
    // generate path name = directory name
    
    // get this directory nname and add it the copied file 's name
    printf("%s\n", pathname);
    copied_file = fopen(filename, "w+"); /* create a copie file, in the specific directory */
    
    while ((c=fgetc(original_file)) != EOF)
    {
        fputc(c, copied_file);
    }
    free(dir);
    fclose(original_file); /* close the origian file */
    fclose(copied_file); /* close the copied file */
}