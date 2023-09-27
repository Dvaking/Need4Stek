/*
** EPITECH PROJECT, 2023
** my_str_up_case
** File description:
** function that puts every letter of every word in it in uppercase
*/

#include <stdlib.h>

int my_str_up_case(char *str)
{
    if (str == NULL)
        return -1;
    for (int i = 0; str[i] != '\0'; i += 1){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }
    return 0;
}
