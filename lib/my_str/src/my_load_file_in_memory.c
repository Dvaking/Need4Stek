/*
** EPITECH PROJECT, 2023
** new_project_folder_file
** File description:
** my_load_file_in_memory
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int my_str_len(char const *str);
int my_str_cat(char *dest, char const *src);

static void add_fragment_to_end_str_sub(char **str_base, char *fragment, int
    nb_to_copy, int len_str)
{
    for (int i = 0; i < nb_to_copy; i += 1) {
        (*str_base)[len_str + i] = fragment[i];
    }
}

static int add_str_to_end_str(char **str_base, char *fragment, int nb_to_copy)
{
    if ((*str_base) == NULL || fragment == NULL || nb_to_copy < 0)
        return 84;
    int len_str = my_str_len((*str_base));
    if (len_str == -1)
        len_str = 0;
    char *save_str = malloc(sizeof(char) * (len_str + 1));
    if (save_str == NULL)
        return 84;
    save_str[0] = '\0';
    my_str_cat(save_str, (*str_base));
    free((*str_base));
    (*str_base) = malloc(sizeof(char) * (len_str + nb_to_copy + 1));
    if ((*str_base) == NULL)
        return 84;
    (*str_base)[0] = '\0';
    my_str_cat((*str_base), save_str);
    add_fragment_to_end_str_sub(str_base, fragment, nb_to_copy, len_str);
    (*str_base)[len_str + nb_to_copy] = '\0';
    free(save_str);
    return 0;
}

static int if_error_close_fd(void *function, void *value, int *fd)
{
    if (function == value) {
        return 84;
        close((*fd));
    }
    return 0;
}

int my_load_file_in_memory_sub(int *nread, char *buffer, char **result_str,
int *fd)
{
    if ((*nread) == -1) {
        close((*fd));
        return 84;
    }
    if (add_str_to_end_str(result_str, buffer, (*nread)) == 84) {
        close((*fd));
        return 84;
    }
    return 0;
}

char *my_load_file_in_memory(const char *filename)
{
    if (filename == NULL)
        return NULL;
    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return NULL;
    char *result_str = malloc(sizeof(char) * (1));
    if (if_error_close_fd(result_str, NULL, &fd))
        return NULL;
    result_str[0] = '\0';
    int nread = 1;
    char buffer[100];
    while ((nread = read(fd, buffer, 100)) != 0) {
        if (my_load_file_in_memory_sub(&nread, buffer, &result_str, &fd) == 84)
            return NULL;
    }
    close(fd);
    return result_str;
}
