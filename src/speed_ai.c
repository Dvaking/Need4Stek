/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendi
** File description:
** speed_ai
*/

#include "my_project.h"

int speed_ai_sub(my_project_t *my_project_n, char **str_splited)
{
    if (my_get_nbr(str_splited[19]) < 1500){
        printf_and_read_return("CAR_FORWARD:0.6\n", my_project_n);
        return OK;
    }
    if (my_get_nbr(str_splited[19]) < 2000){
        printf_and_read_return("CAR_FORWARD:0.8\n", my_project_n);
        return OK;
    }
    printf_and_read_return("CAR_FORWARD:1\n", my_project_n);
    return OK;
}

int speed_ai(my_project_t *my_project_n, char **str_splited)
{
    if (my_get_nbr(str_splited[19]) < 250){
        printf_and_read_return("CAR_FORWARD:0.05\n", my_project_n);
        return OK;
    }
    if (my_get_nbr(str_splited[19]) < 500){
        printf_and_read_return("CAR_FORWARD:0.2\n", my_project_n);
        return OK;
    }
    if (my_get_nbr(str_splited[19]) < 1000){
        printf_and_read_return("CAR_FORWARD:0.4\n", my_project_n);
        return OK;
    }
    if (speed_ai_sub(my_project_n, str_splited) == OK)
        return OK;
    return OK;
}
