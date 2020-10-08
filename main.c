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

    snapname = trancat(hold, filename);
    make_dir(snapname);
    copy(filename);
    return (0);
}
