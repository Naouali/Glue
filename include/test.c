#include "glue.h"



int main(int argc, char **argv)
{
    char *filename = argv[1];
    int check;
    check = strcmp(argv[2], "ret");
    if (check == 0)
    {
        ret(filename);
    }
    else {
        copy_file(filename);
    }
    return (0);

}
