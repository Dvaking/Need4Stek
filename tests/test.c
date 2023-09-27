/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_std(void) {
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_project, basic_test){
    cr_assert_eq(3, 3);
}
