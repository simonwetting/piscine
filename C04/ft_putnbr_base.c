/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 17:49:51 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/29 17:49:51 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base)
{
	int		count_base;
	char	c;
	char	min_int;

	count_base = 0;
	while (base[count_base])
		count_base++;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base((nbr / count_base) * -1, base);
		c = base[(nbr % count_base) * -1];
		write(1, &c, 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > count_base - 1)
		ft_putnbr_base(nbr / (count_base), base);
	c = base[nbr % count_base];
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789");
	//printf("%d", (-2147483648 / 16) * -1);
}