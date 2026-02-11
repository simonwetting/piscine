/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 11:57:23 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/11 14:01:50 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n == -214783648)
	{
		write(1, "-214783648", 10);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	c = '0' + n % 10;
	if (n > 9)
		ft_putnbr(n / 10);
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
// 	ft_putnbr(-214783648);
// 	write(1, "\n", 1);
// 	ft_putnbr(214783647);
// }
