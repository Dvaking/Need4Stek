/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_cpy
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_cpy, basic_test) {
    char dest[10] = {'\0'};
    char *s1 = "TOTO";
    char *s2 = "TATA";
    char *s3 = "TATATATA";
    my_str_cpy(dest, s1);
    cr_assert_str_eq(dest, s1);
    my_str_cpy(dest, s2);
    cr_assert_str_eq(dest, s2);
    my_str_cpy(dest, s3);
    cr_assert_str_eq(dest, s3);
}

Test(my_str_cpy, rigor) {
    char *s1 = "TOTO";
    cr_assert_eq(my_str_cpy(NULL, s1), -1);
    cr_assert_eq(my_str_cpy(s1, NULL), -1);
    cr_assert_eq(my_str_cpy(NULL, NULL), -1);
}
