/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** printf_and_read_return
*/

#include "my_project.h"

int printf_and_read_return(char *str, my_project_t *my_project_n)
{
    if (printf(str) < 0)
        return 84;
    if (getline(&(my_project_n->line), &(my_project_n->len), my_project_n->fd)
    == -1)
        return 84;
    return 0;
}
