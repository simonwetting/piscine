/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 08:34:54 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/21 08:34:54 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void    print_number(int i)
{
    char    a, b, c;

    a, b, c = '0';
    if (i < 100)
        write(1, "0", 1);
    else
    {
        a += i % 100;
        write(1, &a, 1);
    }
        /*b += i % 10 - 10 * i % 100;*/
        write(1, &b, 1);
        /*c += i - (i % 10) * 10;*/
        write(1, &c, 1);
        write(1, ",", 1);
        write(1, " ", 1);
    
}

void    ft_print_combo(void)
{
    int     i;

    i = 12;
    while (i <= 999)
    {
        print_number(i);
        i++;
    }
}

int     main(void)
{
    ft_print_combo();
}