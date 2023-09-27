/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** delete_first_element_list
*/

#include "my_linked_list.h"

void delete_first_element_list(elt_t **list)
{
    elt_t *e1 = *list;
    elt_t *e2 = e1->next;
    free(e1);
    *list = e2;
    if (e2 != NULL)
        e2->prev = NULL;
}
