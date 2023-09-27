/*
** EPITECH PROJECT, 2023
** B-PSU-100-BDX-1-1-myls-tom.mendy
** File description:
** my_list
*/

#ifndef MY_LIST_H_
    #define MY_LIST_H_
    #include <stdlib.h>
    #include <stdbool.h>
    #include "my_str.h"
    typedef int list_type;
    typedef struct elt {
        list_type data;
        struct elt *next;
        struct elt *prev;
    }elt_t;
    int get_list_size(elt_t * list);
    int put_end_list(elt_t **list, list_type value);
    void print_linked_list(elt_t *list);
    void print_linked_list_and_empty(elt_t **list);
    void swap_two_first_element(elt_t **list);
    void push_first_element_into_other_list(elt_t **list1, elt_t **list2);
    void rotate_list_first_to_last(elt_t **list);
    int list_is_sort(elt_t *list);
    void delete_first_element_list(elt_t **list);
    void delete_actual_node_list(elt_t *list);
#endif /* !MY_LIST_H_ */
