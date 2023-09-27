/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-tom.mendy
** File description:
** change_begin_str
*/

#include "spliter.h"

int change_begin_str(char **str, char spe_char)
{
    if ((*str) == NULL)
        return 84;
    if ((*str)[0] != spe_char)
        return 0;
    for (int r = 0; (*str)[r] != '\0'; r += 1) {
        if ((*str)[r] != spe_char) {
            (*str) = &((*str)[r]);
            return 1;
        }
    }
    return 0;
}
