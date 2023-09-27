/*
** EPITECH PROJECT, 2023
** minishell2
** File description:
** test_spliter
*/

#include <criterion/criterion.h>
#include "my_str.h"
#include "spliter.h"
#include <stdio.h>

Test(spliter, basic_test) {
    char path[] = "/usr/bin:/bin";
    char **path_array = spliter(path, ":");
    cr_assert_str_eq(path_array[0], "/usr/bin");
    cr_assert_str_eq(path_array[1], "/bin");
    cr_assert_eq(path_array[2], NULL);
}

Test(spliter, basic_test_2) {
    char path[] = "\t\t    ls\t     \t-l    \t\t  \t -a /usr   \t\t";
    char **path_array = spliter(path, " \t");
    cr_assert_str_eq(path_array[0], "ls");
    cr_assert_str_eq(path_array[1], "-l");
    cr_assert_str_eq(path_array[2], "-a");
    cr_assert_str_eq(path_array[3], "/usr");
    cr_assert_eq(path_array[4], NULL);
}

Test(spliter, separator_at_the_end) {
    char path[] = "/usr/bin:/bin:";
    char **path_array = spliter(path, ":");
    cr_assert_str_eq(path_array[0], "/usr/bin");
    cr_assert_str_eq(path_array[1], "/bin");
    cr_assert_eq(path_array[2], NULL);
}

Test(spliter, separator_at_the_beggining) {
    char path[] = ":/usr/bin:/bin";
    char **path_array = spliter(path, ":");
    cr_assert_str_eq(path_array[0], "/usr/bin");
    cr_assert_str_eq(path_array[1], "/bin");
    cr_assert_eq(path_array[2], NULL);
}

Test(spliter, test_no_in_env){
    char path[] = "/usr/bin";
    char **path_array = spliter(path, ":");
    cr_assert_str_eq(path_array[0], "/usr/bin");
    cr_assert_eq(path_array[1], NULL);
}

Test(spliter, path_only_contain_separator){
    char path[] = " \t \t \t \t \t\t \t \t";
    char **path_array = spliter(path, " \t");
    cr_assert_eq(path_array, NULL);
}

Test(spliter, NULL_path){
    char **path_array = spliter(NULL, ":");
    cr_assert_eq(path_array, NULL);
}

Test(spliter, NULL_separator){
    char path[] = "/usr/bin";
    char **path_array = spliter(path, NULL);
    cr_assert_eq(path_array, NULL);
}

Test(spliter, NULL_all){
    char path[] = "/usr/bin";
    char **path_array = spliter(NULL, NULL);
    cr_assert_eq(path_array, NULL);
}
