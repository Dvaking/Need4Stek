/*
** EPITECH PROJECT, 2023
** my_str_str
** File description:
** function finds the first occurrence of the substring
*/

#include <stddef.h>

int my_str_len(char const * str);
int my_str_n_cmp(char const *s1,char const *s2, int n);

char *my_str_str(char *str, char const *to_find)
{
    if (str == NULL || to_find == NULL)
        return NULL;
    int len_find = my_str_len(to_find);
    int len = my_str_len(str) - len_find;
    for (int i = 0; i <= len; i += 1){
        if (my_str_n_cmp(&str[i], to_find, len_find) == 0){
            return &str[i];
        }
    }
    return str;
}
