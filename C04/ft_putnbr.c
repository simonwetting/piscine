/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 11:57:23 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/27 15:44:27 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		c = '0' + nb % 10;
		ft_putnbr(nb / 10);
		write(1, &c, 1);
	}
}
// void ft_putnbr(int nb)
// {
// 	char c;

// 	if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 	}
// 	c = (nb % 10) + '0';
// 	write(1, &c, 1);

// }

int	main(void)
{
	ft_putnbr(123213);
	write(1, "\n", 1);
	ft_putnbr(-123213);
	write(1, "\n", 1);
	ft_putnbr(0);
}
