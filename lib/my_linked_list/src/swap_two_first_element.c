/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** swap_two_first_element
*/

#include "my_linked_list.h"

void swap_two_first_element(elt_t **list)
{
    int len = get_list_size(*list);
    if (len > 1) {
        elt_t *e1 = (*list);
        elt_t *e2 = e1->next;
        elt_t *e3 = e2->next;
        *list = e2;
        e1->prev = e2;
        e2->next = e1;
        e2->prev = NULL;
        e1->next = e3;
        if (len > 2) {
            e3->prev = e1;
        }
    }
}
