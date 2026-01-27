/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/20 16:00:30 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/27 15:03:13 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int i)
{
	char	c;

	c = '0' + i;
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		i;
	int		a;
	int		b;
	int		c;

	i = 12;
	while (i <= 999)
	{
		a = (i - i % 100) / 100;
		b = (i % 100 - i % 10) / 10;
		c = i % 10;
		if (a != b && b != c && a != c)
		{
			print_number(a);
			print_number(b);
			print_number(c);
			if (i < 987)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
		}
		i++;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb();
// }