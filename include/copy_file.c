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
    char *dir; /* the path in which the copie should be stored, wil be created using a function */
    char *pathname; /* name of the full path */
    original_file = fopen(filename, "r"); /* open the original file in the read mode */
    char *version;
    char *ver_file;
    /* first generated the path name and then create a directory with this name if not exists */
    // generate path name = directory name
    dir = genpath_name(filename);
    // call to makedir --= create a directory
    if( mkdir(dir, 0777) == -1)
        mkdir(dir, 0777);
    // get this directory nname and add it the copied file 's name
    version = get_version(filename);
    ver_file = strcat(version, filename);
    pathname = strcat(dir, ver_file);
    printf("%s\n", pathname);
    copied_file = fopen(pathname, "w+"); /* create a copie file, in the specific directory */
    
    while ((c=fgetc(original_file)) != EOF)
    {
        fputc(c, copied_file);
    }
    free(dir);
    fclose(original_file); /* close the origian file */
    fclose(copied_file); /* close the copied file */
}