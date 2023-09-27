/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_put_nbr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_int.h"

void redirect_my_put_nbr(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_nbr, basic_test, .init = redirect_my_put_nbr) {
    my_put_nbr(1234567);
    cr_assert_stdout_eq_str("1234567");
}

Test(my_put_nbr, negative, .init = redirect_my_put_nbr) {
    my_put_nbr(-1234567);
    cr_assert_stdout_eq_str("-1234567");
}

Test(my_put_nbr, zero, .init = redirect_my_put_nbr) {
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, rigor, .init = redirect_my_put_nbr) {
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}
