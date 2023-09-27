/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_project
*/

#include "my_project.h"

int loop_ai_sub(my_project_t *my_project_n, int *is_running)
{
    char **str_splited = NULL;
    if (printf_and_read_return("GET_INFO_LIDAR\n", my_project_n) == 84)
        return 84;
    str_splited = spliter(my_project_n->line, ":");
    speed_ai(my_project_n, str_splited);
    direction_ai(str_splited, my_project_n);
    if (strncmp(str_splited[35], "Track Cleared", 13) == 0) {
        if (printf_and_read_return("CAR_FORWARD:0\n", my_project_n) == 84)
            return 84;
        *is_running = 0;
    }
    free_map(str_splited);
    return OK;
}

int loop_ai(my_project_t *my_project_n)
{
    int is_running = 1;
    while (is_running == 1) {
        if (loop_ai_sub(my_project_n, &is_running) != OK)
            return 84;
    }
    return 0;
}

int my_project(int argc, char **argv)
{
    my_project_t my_project_n = {.line = NULL, .len = 0};
    setvbuf(stdout, NULL, _IONBF, 0);
    my_project_n.fd = fopen(".fifo_n4s", "r");
    if (my_project_n.fd == NULL)
        return 84;
    if (printf_and_read_return("START_SIMULATION\n", &(my_project_n)) == 84)
        return 84;
    if (printf_and_read_return("CAR_FORWARD:1\n", &(my_project_n)) == 84)
        return 84;
    loop_ai(&my_project_n);
    sleep(3);
    if (printf_and_read_return("STOP_SIMULATION\n", &(my_project_n)) == 84)
        return 84;
    fclose(my_project_n.fd);
    return 0;
}
