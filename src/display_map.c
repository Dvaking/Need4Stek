/*
** EPITECH PROJECT, 2023
** B-AIA-200-BDX-2-1-n4s-marc.mendia
** File description:
** display_map
*/

#include "my_project.h"

int display_map(char **map)
{
    int i = 0;
    if (map == NULL)
        return 0;
    for (; map[i + 1] != NULL; i += 1){
        write(2, map[i], strlen(map[i]));
        write(2, "\n", 1);
    }
    return 0;
}
