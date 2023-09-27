/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_is_prime
*/

#include <criterion/criterion.h>
#include "my_int.h"

Test(my_is_prime, basic_true) {
    cr_assert_eq(my_is_prime(2), 1);
    cr_assert_eq(my_is_prime(3), 1);
    cr_assert_eq(my_is_prime(5), 1);
    cr_assert_eq(my_is_prime(7), 1);
    cr_assert_eq(my_is_prime(11), 1);
    cr_assert_eq(my_is_prime(13), 1);
    cr_assert_eq(my_is_prime(127), 1);
}

Test(my_is_prime, basic_false) {
    cr_assert_eq(my_is_prime(0), 0);
    cr_assert_eq(my_is_prime(1), 0);
    cr_assert_eq(my_is_prime(4), 0);
    cr_assert_eq(my_is_prime(6), 0);
    cr_assert_eq(my_is_prime(8), 0);
    cr_assert_eq(my_is_prime(200), 0);
}
