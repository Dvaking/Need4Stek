/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_find_prime_sup
*/

#include <criterion/criterion.h>
#include "my_int.h"

Test(my_find_prime_sup, basic_test) {
    cr_assert_eq(my_find_prime_sup(1), 2);
    cr_assert_eq(my_find_prime_sup(-100), 2);
    cr_assert_eq(my_find_prime_sup(11), 11);
    cr_assert_eq(my_find_prime_sup(12), 13);
}
