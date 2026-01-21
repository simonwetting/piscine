/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 11:44:07 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/21 11:49:27 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int i)
{
	char	c;

	c = '0' + i;
	write(1, &c, 1);
}

void	ft_print_comb()
{
	int		i, a, b, c;

	i = 12;
	while (i <= 99)
	{
		a = (i - i % 100) / 100;
		b = (i % 100 - i % 10) / 10;
		c = i % 10;
		if (a != b && b != c && a != c)
		{
			print_number(a);
			print_number(b);
			print_number(c);
			write(1, ",", 1);
			write(1, " ", 1);
		}
		i++;
	}

}