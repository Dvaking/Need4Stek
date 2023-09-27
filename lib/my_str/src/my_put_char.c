/*
** EPITECH PROJECT, 2023
** my_put_char
** File description:
** my_put_char
*/

#include <unistd.h>

int my_put_char(char const c)
{
    if (write(1, &c, 1) == -1)
        return -1;
    return 0;
}
