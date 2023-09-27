/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_cat
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_cat, basic_test) {
    char dest[100] = {'\0'};
    char *s1 = "TOTO";
    char *s2 = "TATA";
    my_str_cat(dest, s1);
    cr_assert_str_eq(dest, s1);
    my_str_cat(dest, s2);
    cr_assert_str_eq(dest, "TOTOTATA");
}

Test(my_str_cat, rigor) {
    char *s1 = "TOTO";
    cr_assert_eq(my_str_cat(NULL, s1), -1);
    cr_assert_eq(my_str_cat(s1, NULL), -1);
    cr_assert_eq(my_str_cat(NULL, NULL), -1);
}
