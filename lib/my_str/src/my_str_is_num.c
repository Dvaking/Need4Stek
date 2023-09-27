/*
** EPITECH PROJECT, 2023
** my_str_is_num
** File description:
** function that returns 1 if the string passed
** as parameter only contains digits and 0 otherwise
*/

#include <stdlib.h>
int my_is_num(char const c);

int my_str_is_num(char const *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i += 1){
        if (my_is_num(str[i]) == 0)
            return 0;
    }
    return 1;
}
