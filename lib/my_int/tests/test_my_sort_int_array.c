/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_sort_int_array
*/

#include <criterion/criterion.h>
#include "my_int.h"

Test(my_sort_int_array, basic_true) {
    int tab[] = {6, 0, 9 ,2};
    my_sort_int_array(tab, 4);
    cr_assert_eq(tab[0], 0);
    cr_assert_eq(tab[1], 2);
    cr_assert_eq(tab[2], 6);
    cr_assert_eq(tab[3], 9);
}

Test(my_sort_int_array, basic_false) {
    int tab[] = {6, 0, 9 ,2};
    cr_assert_eq(my_sort_int_array(tab, 0), -1);
    cr_assert_eq(my_sort_int_array(NULL, 1), -1);
}
