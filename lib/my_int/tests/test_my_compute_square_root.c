/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_computer_square_root
*/

#include <criterion/criterion.h>
#include "my_int.h"

Test(my_compute_square_root, basic_test) {
    cr_assert_eq(my_compute_square_root(4), 2);
    cr_assert_eq(my_compute_square_root(9), 3);
    cr_assert_eq(my_compute_square_root(16), 4);
    cr_assert_eq(my_compute_square_root(25), 5);
}

Test(my_compute_square_root, rigot) {
    cr_assert_eq(my_compute_square_root(1), 1);
    cr_assert_eq(my_compute_square_root(-2147483648), 0);
    cr_assert_eq(my_compute_square_root(2147483648), 0);
}
