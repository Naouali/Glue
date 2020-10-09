#include "glue.h"

/**
 * my_itoa - function to convert int to a string
 * @num: int to be converted
 * @str: string to hold the value of inteter
 * Return: string
 */

char *my_itoa(int num, char *str)
{
        if(str == NULL)
        {
                return NULL;
        }
        sprintf(str, "%d", num);
        return str;
}