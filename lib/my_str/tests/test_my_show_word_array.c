/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_show_word_array
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_str.h"

void redirect_my_show_word_array(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_show_word_array, basic_test, .init = redirect_my_show_word_array) {
    char *tab[3] = {"poule", "TOTO", "tata"};
    my_show_word_array(tab);
    cr_assert_stdout_eq_str("poule\nTOTO\ntata\n");
}

Test(my_show_word_array, rigor, .init = redirect_my_show_word_array) {
    char *tab[3] = {"TOTO", NULL, "tata"};
    my_show_word_array(tab);
    cr_assert_stdout_eq_str("TOTO\n");
}

Test(my_show_word_array, rigor_output) {
    char *tab[3] = {NULL, "TOTO", "tata"};
    cr_assert_eq(my_show_word_array(tab), 0);
}
