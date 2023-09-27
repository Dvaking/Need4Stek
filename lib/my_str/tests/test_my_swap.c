/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_swap
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_swap, basic_test) {
    int a = 2;
    int b = 7;
    my_swap(&a, &b);
    cr_assert_eq(a, 7);
    cr_assert_eq(b, 2);
}
