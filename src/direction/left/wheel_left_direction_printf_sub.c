/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** wheel_left_direction_printf_sub
*/

#include "my_project.h"

static int wheel_left_direction_printf_eight(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 250){
        if (value1 >= value2){
            printf_and_read_return("WHEELS_DIR:-1\n", my_project_n);
            return 0;
        }
    }
    return 1;
}

static int wheel_left_direction_printf_seven(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 300){
        if (wheel_left_direction_printf_eight(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
        if (value1 >= value2 + 500 || value1 >= value2 * 1.75){
            printf_and_read_return("WHEELS_DIR:-0.6\n", my_project_n);
            return 0;
        }
    }
    return 1;
}

int wheel_left_direction_printf_sixte(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 400){
        if (wheel_left_direction_printf_seven(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
        if (value1 >= value2 + 400 || value1 >= value2 * 1.5){
            printf_and_read_return("WHEELS_DIR:-0.4\n", my_project_n);
            return 0;
        }
    }
    return 1;
}
