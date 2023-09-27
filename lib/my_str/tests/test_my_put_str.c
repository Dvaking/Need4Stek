/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_put_char
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_str.h"

void redirect_my_put_str(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_put_str, basic, .init = redirect_my_put_str) {
    my_put_str("poiresdcvbhzz(èçà)^ù");
    cr_assert_stdout_eq_str("poiresdcvbhzz(èçà)^ù");
}

Test(my_put_str, rigor) {
    char *str = NULL;
    cr_assert_eq(my_put_str(str), -1);
}
