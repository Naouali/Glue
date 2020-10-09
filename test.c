#include "glue.h"


int main()
{
    char *s1 = "mainc";
    char *s2 ;
    char *new;

    new = gen_dirname(s2, s1);
    printf("%s\n", new);

    return 0;
}
