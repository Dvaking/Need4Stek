/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** delete_actual_node_list
*/

#include "my_linked_list.h"

void delete_actual_node_list(elt_t *list)
{
    elt_t *prev_node = list->prev;
    elt_t *next_node = list->next;
    prev_node->next = list->next;
    next_node->prev = list->prev;
    free(list);
}
