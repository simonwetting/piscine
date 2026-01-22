/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_ft_printcomb2.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 10:18:59 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 10:18:59 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	space = 0;

void	put_nbr(int i)
{
	char	c;

	c = '0' + i % 10;
	if (i > 9)
		put_nbr (i / 10);
	if (space++ == 2)
	{
		write(1, " ", 1);
		space = 0;
	}
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	for (int n = 0; n <= 9999; n++)
	{
		if (n <= 9)
			write(1, "00 0", 4);
		else if ( n <= 99)
			write(1, "00 ", 3);
		else if (n <= 999)
			write(1, "0", 1);
		put_nbr(n);
		if (n != 9999)
			write(1, ", ", 2);
	}
}

int		main(void)
{
	ft_print_comb2();
}