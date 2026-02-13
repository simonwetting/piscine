/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 17:49:51 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/12 14:03:18 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_invalid(char *str)
{
	int		n;
	int		m;

	n = 0;
	while (str[n])
	{
		if (str[n] == '+' || str[n] == '-' || (str[n] >= 9 && str[n] <= 13))
			return (1);
		m = -1;
		while (str[++m])
			if (str[n] == str[m] && n != m)
				return (1);
		n++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		count_base;
	char	c;

	count_base = 0;
	while (base[count_base])
		count_base++;
	if (base_invalid(base) || count_base < 2)
		return ;
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr_base((nbr / count_base) * -1, base);
		c = base[(nbr % count_base) * -1];
		write(1, &c, 1);
		return ;
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

// int	main(void)
// {
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(2147483647, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(0, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(10, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEFF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEF+");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(255, "0123456789ABCDEF-");
// }
