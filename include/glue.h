#ifndef __HEADER__
#define __HEADER__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>


void copy_file(char *filename);
char *genpath_name(char *filename);
void ret(char *filename);
char * get_version(char *filename);
char *int_to_str(int n);

#endif /* end of header*/
