/*
** EPITECH PROJECT, 2023
** obtain_percent
** File description:
** affiche un %
*/

#include "my_printf.h"

int obtain_percent(char *str, va_list list)
{
    int len = 0;
    char *string = malloc(sizeof(char));
    string[0] = '%';
    len = print_string(string);
    return len;
}
