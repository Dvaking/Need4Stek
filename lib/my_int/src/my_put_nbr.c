/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

int my_put_str(char const * str);
int my_put_char(char const c);

static int display(int nb)
{
    int temp = nb % 10;
    if (nb == 0)
        return 0;
    display(nb / 10);
    if (my_put_char(temp + 48) == -1)
        return -1;
    return 0;
}

int my_put_nbr(int nb)
{
    if (nb == -2147483648){
        if (my_put_str("-2147483648") == -1)
            return -1;
        return 0;
    }
    if (nb < 0){
        if (my_put_char('-') == -1)
            return -1;
        nb = - nb;
    }
    if (nb == 0)
        if (my_put_char('0') == -1)
            return -1;
    if (display(nb) == -1)
        return -1;
    return 0;
}
