/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** function that displays the content of an array of words
*/

#include <unistd.h>
int my_put_str(char const * str);

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i += 1){
        if (my_put_str(tab[i]) == -1)
            return -1;
        if (write(1, "\n", 1) == -1)
            return -1;
    }
    return 0;
}
