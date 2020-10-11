#include "glue.h"



int main(int argc, char **argv)
{
    char *filename = argv[1];
    char *version = argv[3];
    int check;
    if (argv[2] != NULL)
    {
        check = strcmp(argv[2], "ret");
        if (check == 0)
        {
            ret(filename, version);
        }
    }
    else {
        copy_file(filename);
    }
    return (0);

}
