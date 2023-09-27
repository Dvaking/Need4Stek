/*
** EPITECH PROJECT, 2023
** my
** File description:
** my
*/

#ifndef MY_STR_H_
    #define MY_STR_H_
    int my_put_char(char const c);
    void my_swap(int *a, int *b);
    int my_put_str(char const *str);
    int my_str_len(char const *str);
    int my_get_nbr(char const *str);
    int my_str_cpy(char *dest, char const *src);
    int my_str_n_cpy(char *dest, char const *src, int n);
    int my_rev_str(char *str);
    char *my_str_str(char *str, char const *to_find);
    int my_str_cmp(char const *s1, char const *s2);
    int my_str_n_cmp(char const *s1, char const *s2, int n);
    int my_str_up_case(char *str);
    int my_str_low_case(char *str);
    int my_str_capitalize(char *str);
    int my_str_is_alpha(char const *str);
    int my_str_is_num(char const *str);
    int my_str_is_lower(char const *str);
    int my_str_is_upper(char const *str);
    int my_str_is_printable(char const *str);
    int my_show_str(char const *str);
    int my_show_mem(char const *str, int size);
    int my_str_cat(char *dest, char const *src);
    int my_str_n_cat(char *dest, char const *src, int nb);
    int my_show_word_array(char *const *tab);
    char **my_str_to_word_array(char const * str);
    int my_is_prime(int const nb);
    int my_is_alpha(char const c);
    int my_is_lower(char const c);
    int my_is_num(char const c);
    int my_is_upper(char const c);
    int my_is_printable(char const c);
    char *my_load_file_in_memory(const char *filename);
    int my_count_nb_char_in_str(char *str, char spe_char);
    char **my_load_file_in_array(const char *filename);
#endif /* MY_STR_H_ */
