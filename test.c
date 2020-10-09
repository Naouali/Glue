#include "glue.h"


int main()
{
    char *s1= "main.c";
    int v = 5;
    char *hold;
    char *dir;
   
    char *dirname; /* variable to store directory name */
   
    dirname = gen_fullpath(s1, v, hold);
    printf("%s\n", dirname);
    return 0;
}
