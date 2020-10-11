#include "glue.h"

/**
 * get_version - function to index snaps in their directory
 * @filename: name of the snap
 * Return: integer in the format of a caracter
 */

int get_version(char *filename){
    /*logic*/
    /* loop throw the directory of the given snap */
    /* and get the number of files */
    /* increment that number every time a snap is added*/

    struct dirent *de;  // Pointer for directory entry 
    int i = 0; // Number of file in the directory
    // opendir() returns a pointer of DIR type. 
    char *dirname;
    dirname = genpath_name("main.c");
    DIR *dr = opendir(dirname); 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open directory 
    { 
        printf("Could not open current directory\n" ); 
        return 0; 
    } 
  
    while ((de = readdir(dr)) != NULL) 
    {
        if (strcmp(de->d_name, ".") != 0 && strcmp(de->d_name, "..") != 0)
            i++; 
    }
            
    closedir(dr);     
    return i; 
} 
