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
    int check;
    check = mkdir(pathname, 0777);
    printf("%s\n", pathname);
    return 0;
}
