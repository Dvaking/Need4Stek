/*
** EPITECH PROJECT, 2023
** B-CPE-101-BDX-1-1-myprintf-tom.mendy
** File description:
** print_char
*/

#include "my_printf.h"

void print_char(char c)
{
    write(1, &c, 1);
}
