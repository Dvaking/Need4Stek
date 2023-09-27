/*
** EPITECH PROJECT, 2023
** B-MUL-100-BDX-1-1-myradar-tom.mendy
** File description:
** push_first_element_into_other_list
*/

#include "my_linked_list.h"

void push_first_element_into_other_list(elt_t **list1, elt_t **list2)
{
    elt_t *l1_e1 = *list1;
    elt_t *l1_e2 = l1_e1->next;
    elt_t *l2_e1 = *list2;
    if (get_list_size(*list2) > 0)
        l2_e1->prev = l1_e1;
    if (get_list_size(*list1) > 1)
        l1_e2->prev = NULL;
    *list1 = l1_e2;
    *list2 = l1_e1;
    l1_e1->next = l2_e1;
}
