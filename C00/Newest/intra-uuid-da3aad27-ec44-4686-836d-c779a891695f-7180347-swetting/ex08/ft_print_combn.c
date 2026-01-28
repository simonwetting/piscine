/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 09:15:41 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 16:05:02 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	factor(int i, int factor)
{
	int		n;

	n = 0;
	while (factor > n)
	{
		i *= 10;
		n++;
	}
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

void	ft_putzero(int i, int amount)
{
	int		count;

	count = 1;
	while (i > 9)
	{
		i /= 10;
		count++;
	}
	while (amount - count++ > 0)
		write(1, "0", 1);
}

int		unique(int i, int n)
{
	int		numbers[n];
	int		m;
	int		k;

	m = 0;
	while (m < n)
	{
		numbers[m] = i % 10;
		i /= 10;
		m++;
	}
	m = 0;
	while (m < n)
	{
		k = 0;
		while (k < n)
		{
			if (numbers[m] == numbers[k] && m != k)
				return (0);
			k++;
		}
		m++;
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int		max_int;

	max_int = factor(1, n);
	for (int m = 0; m < max_int; m++)
	{
		if (unique(m, n))
		{
			ft_putzero(m, n);
			ft_putnbr(m);
			write(1, ", \n", 2);
		}
	}
	write(1, "\n", 1);
}

int		main()
{
	//printf("Status: %d\nArgs[1]: %s\n", status, args[1]);
	ft_print_combn(5);
	//printf("count>%d\n", count_digits(12345));
	printf("%d", unique(12345, 5));
}