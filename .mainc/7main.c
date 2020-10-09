#include <stdio.h>
#include <stdlib.h>
#include "glue.h"
  

int main(int argc, char **argv)
{
    /* initialize empty file object */
    char *filename = argv[1];
    /* initialize empty string to hold copy of a file (snap) */
    char *snapname;
    char *hold;
    char *hold2;
    char *dirname = malloc(sizeof(char) * strlen(filename) * 2);
    /* path = directory name / snape name */
    snapname = create_dir_name(hold, filename);
    /* create directory with same name as filename */
    make_dir(snapname);
    /* take snap/copy an put it inthe directory */
    copy(filename, snapname);
    /*//////////////////////////////////////////////*/
    dirname = gen_fullpath(filename, 1, hold);
    printf("%s\n", dirname);
    return (0);
}
