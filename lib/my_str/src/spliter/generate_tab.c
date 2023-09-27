/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-minishell1-tom.mendy
** File description:
** generate_tab
*/

#include "spliter.h"

int is_str_only_contain_char(char const *const str, char const c)
{
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] != c)
            return 84;
    }
    return 0;
}

static int end_str(char **word_array, char const * const str, int *word_index,
int i)
{
    if (str[i + 1] == '\0') {
        if (add_word(word_array, str, word_index, i + 1) == 84)
            return 84;
        return 0;
    }
    return 1;
}

static int end_word(char **word_array, char *str,
int *str_word_index, char const spe_char)
{
    if (str[str_word_index[0] + 1] == spe_char) {
        if (add_word(word_array, str, &(str_word_index[1]),
            str_word_index[0] + 1) == 84)
            return 84;
        str = &(str[str_word_index[0] + 1]);
        return generate_tab(word_array, str, spe_char, &(str_word_index[1]));
    }
    return 1;
}

int generate_tab(char **word_array, char *str, char const spe_char,
int *word_index)
{
    if (word_array == NULL || word_index == NULL || str == NULL)
        return 84;
    if (change_begin_str(&str, spe_char) == 84)
        return 84;
    if (is_str_only_contain_char(str, spe_char) == 0)
        return 0;
    int return_value = 0;
    int str_word_index[2] = { 0, (*word_index) };
    for (; str[str_word_index[0]] != '\0';
        str_word_index[0] += 1) {
        return_value = end_str(word_array, str, &(str_word_index[1]),
            str_word_index[0]);
        if (return_value != 1)
            return return_value;
        return_value = end_word(word_array, str, str_word_index, spe_char);
        if (return_value != 1)
            return return_value;
    }
    return 0;
}
