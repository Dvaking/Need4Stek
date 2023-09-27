/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_low_case
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_low_case, basic_true) {
    char str[] = "AZERTY";
    char str_2[] = "AZ&-è_GF^$*ù:ERTY";
    char str_3[] = "aZeRtY";
    my_str_low_case(str);
    my_str_low_case(str_2);
    my_str_low_case(str_3);
    cr_assert_str_eq(str, "azerty");
    cr_assert_str_eq(str_2, "az&-è_gf^$*ù:erty");
    cr_assert_str_eq(str_3, "azerty");
}

Test(my_str_low_case, rigor) {
    cr_assert_eq(my_str_low_case(NULL), -1);
}
