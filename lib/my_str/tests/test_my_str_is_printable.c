/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_is_printable
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_is_printable, basic_true) {
    cr_assert_eq(my_str_is_printable("12345670"), 1);
    cr_assert_eq(my_str_is_printable("AZERTY"), 1);
    cr_assert_eq(my_str_is_printable("&'_poiutre"), 1);
    cr_assert_eq(my_str_is_printable("sdfhjklmp^$'"), 1);
    cr_assert_eq(my_str_is_printable("O0MJREZQXCVBN?."), 1);
    cr_assert_eq(my_str_is_printable("m:;,nbvcxA23YUI"), 1);
}

Test(my_str_is_printable, basic_false) {
    cr_assert_eq(my_str_is_printable("\t"), 0);
    cr_assert_eq(my_str_is_printable("\r"), 0);
    cr_assert_eq(my_str_is_printable("\n"), 0);
}

Test(my_str_is_printable, rigor) {
    char *str = NULL;
    cr_assert_eq(my_str_is_printable(str), -1);
}
