/*
** EPITECH PROJECT, 2023
** my_str_cat
** File description:
** my_str_cat
*/

#include <stdlib.h>

int my_str_cat(char *dest, char const *src)
{
    if (dest == NULL || src == NULL)
        return -1;
    int i = 0;
    for (;dest[i] != '\0'; i += 1);
    for (int j = 0; src[j] != '\0'; j += 1){
        dest[i] = src[j];
        i += 1;
    }
    dest[i] = '\0';
    return 0;
}
