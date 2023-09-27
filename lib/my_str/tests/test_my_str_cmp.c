/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_cmp
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_cmp, basic_test) {
    char *s1 = "TOTO";
    char *s2 = "TATA";
    char *s3 = "TATATATA";
    cr_assert_eq(my_str_cmp(s1, s1), 0);
    cr_assert_eq(my_str_cmp(s1, s2), 1);
    cr_assert_eq(my_str_cmp(s2, s3), 1);
}

Test(my_str_cmp, rigor) {
    char *s1 = "TOTO";
    cr_assert_eq(my_str_cmp(NULL, s1), -1);
    cr_assert_eq(my_str_cmp(s1, NULL), -1);
    cr_assert_eq(my_str_cmp(NULL, NULL), -1);
}
