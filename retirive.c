#include "glue.h"


/**
 * retrive - function to retrive a specific snap and replace the current
 * version of the file
 * @filename
 * @version_number: no required
 * Return: copy the specifid version an replace the main file
 */

void retrive(char *filename, int version)
{
    
    char *dirname; /* variable to store directory name */
    char *hold; /*variable to hold */
   
    dirname = gen_fullpath(filename, version, hold);
    printf("%s\n", dirname);
    /* copy snap into original file */
    
}
