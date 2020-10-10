#include "glue.h"



int main(int argc, char **argv)
{
    char *filename = argv[1];
    char *s;
    s = genpath_name(filename);
    printf("%s\n", s);
    free(s);
    return (0);

}
