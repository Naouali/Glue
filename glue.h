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
char * create_dir_name(char *dest, char *source);
char *concate(char *first, char *second);
char *my_itoa(int num, char *str);
char *gen_dirname(char *hold_var, char *filename);
char *gen_snapname(char *filename, int version);
char *gen_fullpath(char *filename, int version, char *hold_var);
char *_strcat(char *dest, char *src);
void retrive(char *filename, int version);

#endif 
