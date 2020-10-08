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
    /* path = directory name / snape name */
    snapname = trancat(hold, filename);
    /* create directory with same name as filename */
    make_dir(snapname);
    /* take snap/copy an put it inthe directory */
    copy(filename, snapname);
    return (0);
}
