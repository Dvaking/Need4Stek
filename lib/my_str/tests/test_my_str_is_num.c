/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_is_num
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_is_num, basic_true) {
    cr_assert_eq(my_str_is_num("12345670"), 1);
}

Test(my_str_is_num, basic_false) {
    cr_assert_eq(my_str_is_num("AZERTY"), 0);
    cr_assert_eq(my_str_is_num("13560UEAN"), 0);
}

Test(my_str_is_num, rigor) {
    char *str = NULL;
    cr_assert_eq(my_str_is_num(str), -1);
}
