/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 09:15:41 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/26 09:15:41 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		factor(int i, int factor)
{
	for (int n = 0; factor > n; n++)
		i *= 10;
	return i;
}

void	ft_putnbr(int n)
{
	char c;

	if (n == -214783648)
	{
		write(1, "-214783648", 10);
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

void	ft_putzero(int i, int total_digits)
{
	int		count;

	count = 0;
	while (i / 10 > 0)
	{
		count ++;
		i = i / 10;
	}
	ft_putnbr(count);
	//while (total_digits - count-- > 0)
		//write(1, "0", 1);
}

void	ft_print_combn(int n)
{
	int		max_int;

	max_int = factor(1, n);
	for (int m = 0; m < max_int; m++)
	{
		if (m == 11)
			write(1, "test\n", 5);
		ft_putzero(m, n);
		ft_putnbr(m);
		write(1, ", \n", 2);
	}
}

int		main(int status, char **args)
{
	printf("Status: %d\nArgs[1]: %s\n", status, args[1]);
	ft_print_combn(3);
}