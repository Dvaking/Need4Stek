/*
** EPITECH PROJECT, 2023
** B-PSU-200-BDX-2-1-bsminishell1-tom.mendy
** File description:
** spliter
*/

#include "spliter.h"

int my_count_nb_char_in_str(char *str, char spe_char);

static int replace_delimiter(char *str, int const i,
char const *const delimiter)
{
    if (str == NULL || delimiter == NULL)
        return 84;
    for (int j = 1; delimiter[j] != '\0'; j += 1) {
        if (str[i] == delimiter[j])
            str[i] = delimiter[0];
    }
    return 0;
}

char **spliter(char *str, char const *const delimiter)
{
    if (str == NULL || delimiter == NULL ||
    str_only_contain_str_delimiter(str, delimiter) == 0)
        return NULL;
    int word_index = 0;
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (replace_delimiter(str, i, delimiter) == 84)
            return NULL;
    }
    if (change_begin_str(&str, delimiter[0]) == 84)
        return NULL;
    int num_words = my_count_nb_char_in_str(str, delimiter[0]);
    if (num_words == -1)
        return NULL;
    char **word_array = malloc(sizeof(char *) * (num_words + 1));
    if (word_array == NULL)
        return NULL;
    generate_tab(word_array, str, delimiter[0], &word_index);
    word_array[num_words] = NULL;
    return word_array;
}
