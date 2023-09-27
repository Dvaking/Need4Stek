/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_compute_power_rec
*/

#include <criterion/criterion.h>
#include "my_int.h"

Test(my_compute_power_rec, basic_test) {
    cr_assert_eq(my_compute_power_rec(10, 2), 100);
    cr_assert_eq(my_compute_power_rec(5, 5), 3125);
    cr_assert_eq(my_compute_power_rec(1, 1), 1);
    cr_assert_eq(my_compute_power_rec(15, 0), 1);
    cr_assert_eq(my_compute_power_rec(150, 0), 1);
    cr_assert_eq(my_compute_power_rec(0, 2), 0);
    cr_assert_eq(my_compute_power_rec(-1, 6), 1);
}

Test(my_compute_power_rec, rigor) {
    cr_assert_eq(my_compute_power_rec(1, 0), 1);
    cr_assert_eq(my_compute_power_rec(0, 1), 0);
    cr_assert_eq(my_compute_power_rec(110, 12), 0);
    cr_assert_eq(my_compute_power_rec(6, -1), 0);
    cr_assert_eq(my_compute_power_rec(-1, -1), 0);
}
