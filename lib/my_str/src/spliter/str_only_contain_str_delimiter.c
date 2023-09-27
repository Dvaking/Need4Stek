/*
** EPITECH PROJECT, 2023
** minishell2
** File description:
** str_only_contain_str_delimiter
*/

#include "spliter.h"

static int str_only_contain_str_delimiter_sub(char const * const str, char
const * const delimiter, int i)
{
    int is_in_str = 1;
    for (int j = 0; delimiter[j] != '\0'; j += 1) {
        if (str[i] == delimiter[j])
            is_in_str = 0;
    }
    if (is_in_str == 1)
        return 1;
    return 0;
}

int str_only_contain_str_delimiter(char const * const str, char const * const
delimiter)
{
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str_only_contain_str_delimiter_sub(str, delimiter, i) == 1)
            return 1;
    }
    return 0;
}
