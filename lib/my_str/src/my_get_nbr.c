/*
** EPITECH PROJECT, 2023
** my_get_nbr
** File description:
** function that returns a number, sent to the function as a string
*/

int my_put_char(char const c);
int my_get_nbr(char const * str);
int my_str_len(char const * str);
int my_compute_power_rec(int const nb, int const power);

static int build_nb(char const *str, int *start, int *end, int *signe)
{
    long int result = 0;
    for (int i = *start; i <= *end; i += 1){
        result += (str[i] - 48) * my_compute_power_rec(10, *end - i);
    }
    if ((*signe % 2) == 1)
        result = - result;
    if ((result < -2147483648) || (result > 2147483647))
        result = 0;
    int test = result;
    return test;
}

static int char_before_int(char const *str)
{
    int start_char = -1;
    int start_int = -1;
    for (int i = 0; i <= (my_str_len(str) + 1); i += 1){
        if ((start_char == -1) && (((str[i] < '0') ||
        (str[i] > '9')) && ((str[i] != '-') && (str[i] != '+'))))
            start_char = i;
        if ((start_int == -1) && (str[i] >= '0') && (str[i] <= '9'))
            start_int = i;
    }
    if (start_char < start_int)
        return 0;
    return 1;
}

int my_get_nbr(char const *str)
{
    int start = -1;
    int end = -1;
    int signe = 0;
    int test = char_before_int(str);
    if (test == 0)
        return 0;
    for (int i = 0; i <= (my_str_len(str) + 1); i += 1){
        if ((start == -1) && (str[i] == '-'))
            signe += 1;
        if ((start == -1) && (str[i] >= '0') && (str[i] <= '9'))
            start = i;
        if (((((i > start) && (start != -1)) && (end == -1))
        && (!(str[i] >= '0' && str[i] <= '9'))))
            end = i - 1;
    }
    int result = build_nb(str, &start, &end, &signe);
    return result;
}
