/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** get_left_side_lidar_value
*/

#include "my_project.h"

float get_left_side_lidar_value(char **line)
{
    return atof(line[3]);
}
