/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** test_my_str_len
*/

#include <criterion/criterion.h>
#include "my_str.h"

Test(my_str_len, basic_test) {
    char *str = NULL;
    for (int i = 1; i < 100; i += 1) {
        str = malloc(sizeof(char) * (i + 1));
        for (int j = 0; j < i; j += 1){
            str[j] = 'a';
        }
        str[i] = '\0';
        cr_assert_eq(my_str_len(str), i);
        free(str);
    }
}

Test(my_str_len, rigot) {
    char *str = NULL;
    cr_assert_eq(my_str_len(str), -1);
}
