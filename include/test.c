#include "glue.h"


int main()
{
    char *s;
    s = int_to_str(122547);
    printf("%s\n", s);
    free(s);
    return (0);
}