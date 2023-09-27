/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_is_upper
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_is_upper, basic_true) {
    cr_assert_eq(my_str_is_upper("AZERTY"), 1);
}

Test(my_str_is_upper, basic_false) {
    cr_assert_eq(my_str_is_upper("azerty"), 0);
    cr_assert_eq(my_str_is_upper("azertyAZERTY"), 0);
}

Test(my_str_is_upper, rigor) {
    char *str = NULL;
    cr_assert_eq(my_str_is_upper(str), -1);
}
