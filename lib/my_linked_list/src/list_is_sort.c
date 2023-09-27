/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-pushswap-tom.mendy
** File description:
** list_fonc_3
*/

#include "my_linked_list.h"

int list_is_sort(elt_t *list)
{
    int below_next = 0;
    elt_t *node = list;
    while (node->next != NULL) {
        if (node->data <= node->next->data)
            below_next += 1;
        node = node->next;
    }
    if (get_list_size(list) - 1 == below_next)
        return true;
    return false;
}
