/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** wheel_right_direction_printf
*/

#include "my_project.h"

static int wheel_right_direction_printf_quinte(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 500 || value1 >= value2 * 1.25){
        if (wheel_right_direction_printf_sixte(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
    }
    return 1;
}

static int wheel_right_direction_printf_quatre(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 600){
        if (wheel_right_direction_printf_quinte(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
        if (value1 >= value2 + 300){
            printf_and_read_return("WHEELS_DIR:0.3\n", my_project_n);
            return 0;
        }
    }
    return 1;
}

static int wheel_right_direction_printf_terce(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 700){
        if (wheel_right_direction_printf_quatre(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
        if (value1 >= value2 + 200){
            printf_and_read_return("WHEELS_DIR:0.2\n", my_project_n);
            return 0;
        }
    }
    return 1;
}

static int wheel_right_direction_printf_sub(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (len_wall < 800){
        if (wheel_right_direction_printf_terce(value1, value2, my_project_n,
        len_wall) == 0)
            return 0;
        if (value1 >= value2 + 100){
            printf_and_read_return("WHEELS_DIR:0.1\n", my_project_n);
            return 0;
        }
    }
    return 1;
}

int wheel_right_direction_printf(int value1, int value2,
my_project_t *my_project_n, int len_wall)
{
    if (wheel_right_direction_printf_sub(value1, value2, my_project_n,
    len_wall) == 0)
        return 0;
    if (value1 >= value2 + 50){
        printf_and_read_return("WHEELS_DIR:0.07\n", my_project_n);
        return 0;
    }
    return 1;
}
