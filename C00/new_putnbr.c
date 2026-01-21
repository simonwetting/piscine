/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_putnbr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 15:39:32 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/21 17:13:43 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int i)
{
	char	c;

	if (i == -2147483648) 
	{
		write(1, "-2147483648", 10);
		return;
	}
	if (i < 0)
	{
		write(1, "-", 1);
		ft_putnbr(i *= -1);
	}
	if (i > 9)
		ft_putnbr(i / 10);
	c = i % 10 + '0';
	write(1, &c, 1);
}

int		main(void)
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(214748364);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1000000000);
}