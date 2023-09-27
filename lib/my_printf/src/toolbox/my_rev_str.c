/*
** EPITECH PROJECT, 2023
** my_rev_str
** File description:
** function that reverses a string
*/

#include "my_printf.h"

char *my_rev_str(char *str)
{
    char temp = 'a';
    int count = my_str_len(str) + 1;
    int action = count / 2;
    for (int i = 0; i < action; i += 1) {
        temp = str[i];
        str[i] = str[count - i - 2];
        str[count - i - 2] = temp;
    }
    return str;
}
