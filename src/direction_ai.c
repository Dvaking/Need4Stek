/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** direction_ai
*/

#include "my_project.h"

int direction_ai(char **str_splited, my_project_t *my_project_n)
{
    int left_side_lidar_value = get_left_side_lidar_value(str_splited);
    int right_side_lidar_value = get_right_side_lidar_value(str_splited);
    int len_wall = atof(str_splited[19]);
    int len_wall_next_2 = atof(str_splited[21]);
    int len_wall_prev_2 = atof(str_splited[17]);
    if (!(len_wall_next_2 > 1200 && len_wall_prev_2 > 1200)){
        if (wheel_right_direction_printf(left_side_lidar_value,
        right_side_lidar_value, my_project_n, len_wall) == 0)
            return 0;
        if (wheel_left_direction_printf(right_side_lidar_value,
        left_side_lidar_value, my_project_n, len_wall) == 0)
            return 0;
    }
    printf_and_read_return("WHEELS_DIR:0\n", my_project_n);
    return 0;
}
