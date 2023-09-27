/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** get_list_size
*/

#include "my_linked_list.h"

int get_list_size(elt_t * list)
{
    elt_t *node = list;
    int count = 0;
    while (node != NULL){
        count += 1;
        node = node->next;
    }
    return count;
}
