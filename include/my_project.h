/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_project
*/

#ifndef MY_PROJECT_H_
    #define MY_PROJECT_H_
    #include <stdbool.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include "my_str.h"
    #include "my_linked_list.h"
    #include "spliter.h"
    #define OK 0
    #define KO 84
    typedef struct my_project_s {
        char *line;
        size_t len;
        FILE *fd;
    } my_project_t;
    int free_map(char **map);
    int display_map(char **map);
    int my_project(int argc, char **argv);
    int speed_ai(my_project_t *my_project_n, char **str_splited);
    float get_left_side_lidar_value(char **line);
    float get_right_side_lidar_value(char **line);
    int wheel_right_direction_printf(int value1, int value2,
    my_project_t *my_project_n, int len_wall);
    int wheel_left_direction_printf(int value1, int value2,
    my_project_t *my_project_n, int len_wall);
    int printf_and_read_return(char *str, my_project_t *my_project_n);
    int direction_ai(char **str_splited, my_project_t *my_project_n);
    int wheel_left_direction_printf_sixte(int value1, int value2,
    my_project_t *my_project_n, int len_wall);
    int wheel_right_direction_printf_sixte(int value1, int value2,
    my_project_t *my_project_n, int len_wall);
#endif /* !MY_PROJECT_H_ */
