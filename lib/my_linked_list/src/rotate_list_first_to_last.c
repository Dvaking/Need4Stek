/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** rotate_list_first_to_last
*/

#include "my_linked_list.h"

void rotate_list_first_to_last(elt_t **list)
{
    elt_t *e1 = *list;
    elt_t *e2 = e1->next;
    elt_t *last = *list;
    while (last->next != NULL){
        last = last->next;
    }
    *list = e2;
    e1->next = NULL;
    e1->prev = last;
    e2->prev = NULL;
    last->next = e1;
}
