/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_computer_square_root
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_int.h"

void redirect_my_is_neg(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_is_neg, basic_test) {
    cr_assert_eq(my_is_neg(4), 0);
    cr_assert_eq(my_is_neg(-1), 0);
}

Test(my_is_neg, basic_positive, .init = redirect_my_is_neg) {
    my_is_neg(0);
    my_is_neg(1);
    cr_assert_stdout_eq_str("PP");
}

Test(my_is_neg, basic_negative, .init = redirect_my_is_neg) {
    my_is_neg(-1);
    cr_assert_stdout_eq_str("N");
}
