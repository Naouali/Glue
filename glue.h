#ifndef __HEADER__
#define __HEADER__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void copy(char *filename, char *pathame);
int make_dir(char *pathname);
char * trancat(char *dest, char *source);
char *concate(char *first, char *second);
char *my_itoa(int num, char *str);

#endif 
