/*
** EPITECH PROJECT, 2023
** my_put_str.c
** File description:
** displays, one-by-one, the characters of a string
*/

#include <unistd.h>
int my_str_len(char const * str);

int my_put_str(char const * str)
{
    int len = my_str_len(str);

    if (len == -1)
        return -1;
    if (write(1, str, len) == -1)
        return -1;
    return 0;
}
