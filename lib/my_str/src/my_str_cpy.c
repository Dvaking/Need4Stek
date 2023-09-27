/*
** EPITECH PROJECT, 2023
** my_str_cpy
** File description:
** function that copies a string into another
*/

#include <stdlib.h>
int my_str_len(char const * str);

int my_str_cpy(char *dest, char const *src)
{
    if (dest == NULL || src == NULL)
        return -1;
    int len = my_str_len(src);
    for (int i = 0; i != len; i += 1){
        dest[i] = src[i];
    }
    dest[len] = '\0';
    return 0;
}
