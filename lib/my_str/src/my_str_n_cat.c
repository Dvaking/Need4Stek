/*
** EPITECH PROJECT, 2023
** my_str_cat
** File description:
** my_str_cat
*/

#include <stdlib.h>

int my_str_n_cat(char *dest, char const *src, int nb)
{
    if (dest == NULL || src == NULL || nb < 0)
        return -1;
    int i = 0;
    while (dest[i] != '\0'){
        i += 1;
    }
    for (int j = 0; src[j] != '\0' && j < nb; j += 1){
        dest[i] = src[j];
        i += 1;
    }
    dest[i] = '\0';
    return 0;
}
