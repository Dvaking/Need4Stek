/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_is_alpha
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_is_alpha, basic_true) {
    cr_assert_eq(my_str_is_alpha("AZERTY"), 1);
    cr_assert_eq(my_str_is_alpha("azerty"), 1);
    cr_assert_eq(my_str_is_alpha("azertyAZERTY"), 1);
}

Test(my_str_is_alpha, basic_false) {
    cr_assert_eq(my_str_is_alpha(" ~\n_^"), 0);
}

Test(my_str_is_alpha, rigor) {
    char *str = NULL;
    cr_assert_eq(my_str_is_alpha(str), -1);
}
