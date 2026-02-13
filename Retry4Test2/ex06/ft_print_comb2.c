/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 11:44:07 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/29 15:44:08 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_put_double(int i)
{
	int	a;
	int	b;

	a = '0' + i / 10;
	b = '0' + i % 10;
	write(1, &a, 1);
	write(1, &b, 1);
}

//  a = i / 100; //first 2 numbers
// 	b = a % 10; //second number
// 	a = a / 10; //first number
// 	c = (i % 100) / 10; //3rd number
// 	d = i % 10; //last number
// printf("a>%d\nb>%d\nc>%d\nd>%d\n", a, b, c, d);

int	unique(int i)
{
	int		a;
	int		b;
	int		c;
	int		d;

	if (i / 100 == i % 100 || (i / 100 >= i % 100))
		return (0);
	else
		return (1);
	a = i / 100;
	b = a % 10;
	a = a / 10;
	c = (i % 100) / 10;
	d = i % 10;
	if (a != b && a != c && a != d && b != c && b != d && c != d)
		return (1);
	else
		return (0);
}

void	ft_print_comb2(void)
{
	int		n;

	n = 0;
	while (n <= 9999)
	{
		if (unique(n))
		{
			if (n >= 2)
				write(1, ", \n", 2);
			ft_put_double(n / 100);
			write(1, " ", 1);
			ft_put_double(n % 100);
		}
		n++;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
