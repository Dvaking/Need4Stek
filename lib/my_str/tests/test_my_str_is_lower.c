/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_is_lower
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_is_lower, basic_true) {
    cr_assert_eq(my_str_is_lower("azerty"), 1);
}

Test(my_str_is_lower, basic_false) {
    cr_assert_eq(my_str_is_lower("AZERTY"), 0);
    cr_assert_eq(my_str_is_lower("azertyAZERTY"), 0);
}

Test(my_str_is_lower, rigor) {
    char *str = NULL;
    cr_assert_eq(my_str_is_lower(str), -1);
}
