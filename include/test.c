#include "glue.h"


int main()
{
    char *filename = "main.c";
    int i;
    i = get_version(filename);
    printf("%d\n", i);

    return (0);
}