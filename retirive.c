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
    FILE * snap; /* snap file already created */
    FILE * original_file; /* originl file */
    char c;
    char *version_str; /* converted version to int varaible */
    char *snap_name; /* snap path to retrive */
    char *dirname; /* variable to store directory name */
    char *hold; /*variable to hold */
    /* converted version integer into string */
    version_str = my_itao(version, version_str);

    /* recreat the name of the snap from the filename */
    snap_name = strcat(version_str, filename);
    /* recreate the path name */
    dirname = gen_dirname(hold, filename):
    /* copy snap into original file */
    snap = fopen(dirname, "r");
    original_file = fopen(filename, "w+");
    while ((c=fgetc(snap)) != EOF)
    {
        fputc(c, original_file);
    }
    fclose(snap);
    fclose(original_file);
}
