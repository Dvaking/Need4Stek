/*
** EPITECH PROJECT, 2023
** B-CPE-101-BDX-1-1-myprintf-tom.mendy
** File description:
** print_string
*/

#include "my_printf.h"

int print_string(char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        print_char(str[i]);
        i += 1;
    }
    int len = my_str_len(str);
    free(str);
    return len;
}
