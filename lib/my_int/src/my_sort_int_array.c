/*
** EPITECH PROJECT, 2023
** my_sort_int_array
** File description:
** sorts an integer array in ascending order
*/

#include <stdlib.h>

static void final(int * array, int * i, int * j)
{
    int temp = 0;
    if (array[*i] > array[*j + *i]){
        temp = array[*i];
        array[*i] = array[*j + *i];
        array[*j + *i] = temp;
    }
}

int my_sort_int_array(int * array, int size)
{
    if (size < 1 || array == NULL)
        return -1;
    for (int i = 0; i < size - 1; i += 1){
        for (int j = 1; j < size - i; j += 1){
            final(array, &i, &j);
        }
    }
    return 0;
}
