/*
** EPITECH PROJECT, 2023
** B-CPE-110-BDX-1-1-pushswap-tom.mendy
** File description:
** rotate_list_last_to_first
*/

#include "my_str.h"
#include "my_linked_list.h"

void rotate_list_last_to_first(elt_t **list)
{
    elt_t *e1 = *list;
    elt_t *last = *list;
    while (last->next != NULL){
        last = last->next;
    }
    elt_t *before_last = last->prev;
    *list = last;
    e1->prev = last;
    before_last->next = NULL;
    last->next = e1;
    last->prev = NULL;
}
