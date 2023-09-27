/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_str
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_str, basic_true) {
    char str[] = "AZERTY";
    char * find = my_str_str(str, "AZE");
    char * find_2 = my_str_str(str, "ER");
    char * find_3 = my_str_str(str, "a");
    cr_assert_str_eq(find, "AZERTY");
    cr_assert_str_eq(find_2, "ERTY");
    cr_assert_str_eq(find_3, "AZERTY");
}

Test(my_str_str, rigor) {
    cr_assert_eq(my_str_str(NULL, "lao"), NULL);
    cr_assert_eq(my_str_str("lao", NULL), NULL);
    cr_assert_eq(my_str_str(NULL, NULL), NULL);
}
