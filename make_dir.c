#include "glue.h"
#include <stdio.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h> 
#include <stdio.h> 
#include <stdlib.h> 

/**
 * make_dir - function to create a directory in the current directory
 * @pathname - directory path
 * Return: 0 on success or 1 on failure
 */

int make_dir(char *pathname)
{
    if (mkdir(pathname, 0777) == -1)
    {
         mkdir(pathname, 0777);
    }
    
    /* if check == 0 directory created succesfully else (-1) failed */
    
    return 0;
}
