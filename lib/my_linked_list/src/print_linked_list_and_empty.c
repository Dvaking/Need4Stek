/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-myls-tom.mendy
** File description:
** print_linked_list_and_empty
*/

#include "my_str.h"
#include "my_int.h"
#include "my_linked_list.h"

void print_linked_list_and_empty(elt_t **list)
{
    int i = 0;
    for (i = 0; *list != NULL; i += 1) {
        my_put_nbr((*list)->data);
        my_put_str("  ");
        elt_t *temp = *list;
        *list = (*list)->next;
        free(temp);
    }
    if (i > 0)
        my_put_char('\n');
}
