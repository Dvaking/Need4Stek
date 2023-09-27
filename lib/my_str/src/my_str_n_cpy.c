/*
** EPITECH PROJECT, 2023
** my_str_n_cpy
** File description:
** function that copies n characters from a string into another
*/

#include <stdlib.h>
int my_str_len(char const * str);

int my_str_n_cpy(char *dest, char const *src, int n)
{
    if (dest == NULL || src == NULL)
        return -1;
    for (int i = 0; i < n; i += 1){
        dest[i] = src[i];
    }
    return 0;
}
