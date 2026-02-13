/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/02 16:52:42 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/02 17:22:20 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base)
{
	int		count_base;
	char	c;

	count_base = 0;
	while (base[count_base])
		count_base++;
	if (nbr > count_base - 1)
		ft_putnbr_base(nbr / (count_base), base);
	c = base[nbr % count_base];
	write(1, &c, 1);
}

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (is_printable(str[index]))
			write(1, str + index, 1);
		else
		{
			write(1, "\\", 1);
			if (str[index] < 16)
				write(1, "0", 1);
			ft_putnbr_base(str[index], "0123456789abcdef");
		}
		index++;
	}
}

// int		main(void)
// {
// 	ft_putstr_non_printable("Hello\nHow are you?");
// }