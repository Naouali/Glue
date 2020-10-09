#include "glue.h"
/**
 * gen_snapname - regenerate snap name in the dierctory to retrive it
 * @filename: name of the original file 
 * @version: the version number of the snape
 * Return: snap name
 */

char *gen_snapname(char *filename, int version)
{
    char *hold_version;
    char *holdcopy;
    hold_version = my_itoa(version, hold_version);
    holdcopy = strcat(hold_version, filename);
    return holdcopy;
}