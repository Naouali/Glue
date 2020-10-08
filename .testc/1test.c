#include "glue.h"


int main()
{
    char s1[] = "hello";
    char s2[] = "world";
    char *new;

    new = concate(s1, s2);
    printf("%s\n", new);

    return 0;
}
