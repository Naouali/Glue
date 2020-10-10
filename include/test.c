#include "glue.h"



int main(int argc, char **argv)
{
    char *filename = argv[1];
    if (argv[2] != NULL)
    {
        ret(filename);
    }
    else {
        copy_file(filename);
    }
    return (0);

}
