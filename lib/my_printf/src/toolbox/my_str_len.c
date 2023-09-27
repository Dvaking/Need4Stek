/*
** EPITECH PROJECT, 2023
** my_str_len
** File description:
** task03
*/

int my_str_len(char const *str)
{
    int i = 0;
    while (str[i] != '\0'){
        i = i + 1;
    }
    return (i);
}
