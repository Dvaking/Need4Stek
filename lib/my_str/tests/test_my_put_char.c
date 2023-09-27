/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_put_char
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_str.h"

void redirect_my_put_char(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_char, basic, .init = redirect_my_put_char) {
    my_put_char('a');
    cr_assert_stdout_eq_str("a");
}
