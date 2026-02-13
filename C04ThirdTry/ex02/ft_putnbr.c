/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 11:57:23 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/12 10:53:34 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -214783648)
	{
		write(1, "-214783648", 10);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	c = '0' + nb % 10;
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr(123213);
// 	write(1, "\n", 1);
// 	ft_putnbr(-123213);
// 	write(1, "\n", 1);
// 	ft_putnbr(0);
// 	write(1, "\n", 1);
// 	ft_putnbr(479);
// 	write(1, "\n", 1);
// 	ft_putnbr(-479);
// 	write(1, "\n", 1);
// 	ft_putnbr(999);
// 	write(1, "\n", 1);
// 	ft_putnbr(-999);
// 	write(1, "\n", 1);
// 	ft_putnbr(1000);
// 	write(1, "\n", 1);
// 	ft_putnbr(-1000);
// 	write(1, "\n", 1);
// 	ft_putnbr(-214783648);
// 	write(1, "\n", 1);
// 	ft_putnbr(214783647);
// }
