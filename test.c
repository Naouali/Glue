#include "glue.h"


int main()
{
    char *s1= "main.c";
    char *dir;
    int v = 5;
    char *hold;
    
    dir = gen_fullpath(s1, v, hold);
    printf("%s\n", dir);
    return 0;
}
