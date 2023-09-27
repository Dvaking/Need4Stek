/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_rev_str
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_rev_str, basic_true) {
    char str[] = "AZERTY";
    my_rev_str(str);
    cr_assert_str_eq(str, "YTREZA");
}

Test(my_rev_str, basic_false) {
    char str[] = "A";
    my_rev_str(str);
    cr_assert_str_eq(str, "A");
}

Test(my_rev_str, rigor) {
    char *str = NULL;
    cr_assert_eq(my_rev_str(str), -1);
}
