/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_capitalize
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_capitalize, basic_test) {
    char s1[] = "TOTO";
    char s2[] = "toto";
    char s3[] = "toto 09+AAata 33 - 1";
    my_str_capitalize(s1);
    my_str_capitalize(s2);
    cr_assert_str_eq(s1, "Toto");
    cr_assert_str_eq(s2, "Toto");
    cr_assert_str_eq(s3, "toto 09+AAata 33 - 1");
}

Test(my_str_capitalize, rigor) {
    cr_assert_eq(my_str_capitalize(NULL), -1);
}
