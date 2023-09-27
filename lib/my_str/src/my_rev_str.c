/*
** EPITECH PROJECT, 2023
** my_rev_str
** File description:
** function that reverses a string
*/

#include <stdlib.h>
int my_str_len (char const * str);

int my_rev_str(char *str)
{
    if (str == NULL)
        return -1;
    char temp = 'a';
    int len_str = my_str_len(str);
    int count = len_str + 1;
    int action = count / 2;
    for (int i = 0; i < action; i += 1){
        temp = str[i];
        str[i] = str[count - i - 2];
        str[count - i - 2] = temp;
    }
    return 0;
}
