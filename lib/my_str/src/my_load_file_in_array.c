/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_load_file_in_array
*/

#include <stdlib.h>
#include "spliter.h"
#include "my_str.h"

char **my_load_file_in_array(const char *filename)
{
    if (filename == NULL)
        return NULL;
    char *str = my_load_file_in_memory(filename);
    if (str == NULL)
        return NULL;
    char **array = spliter(str, "\n");
    free(str);
    return array;
}
