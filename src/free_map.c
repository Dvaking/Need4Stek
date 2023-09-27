/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** free_map
*/

#include "my_project.h"

int free_map(char **map)
{
    int i = 0;
    if (map == NULL)
        return 0;
    for (; map[i] != NULL; i += 1){
        free(map[i]);
    }
    free(map[i]);
    free(map);
    return 0;
}
