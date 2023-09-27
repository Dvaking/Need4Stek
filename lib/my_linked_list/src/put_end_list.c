/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** put_end_list
*/

#include "my_linked_list.h"

int put_end_list(elt_t **list, list_type value)
{
    elt_t *node = *list;
    if (node != NULL) {
        while (node->next != NULL) {
            node = node->next;
        }
        node->next = malloc(sizeof(elt_t));
        if (node->next == NULL)
            return 84;
        node->next->data = value;
        node->next->next = NULL;
        node->next->prev = node;
    } else {
        (*list) = malloc(sizeof(elt_t));
        if ((*list) == NULL)
            return 84;
        (*list)->data = value;
        (*list)->next = NULL;
        (*list)->prev = NULL;
    }
    return 0;
}
