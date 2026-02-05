/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 09:16:49 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 09:16:49 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	factor(int nb, int factor)
{
	while (factor-- > 0)
		nb *= 10;
	return (nb);
}

int ft_sqrt(int nb)
{
	int		length;
	int		tmp;
	int		sqrt;

	length = 0;
	tmp = nb;
	while (tmp > 0)
	{
		length++;
		tmp /= 10;
	}
	if (length % 2 == 0)
		length--;
	sqrt = factor (1, length / 2);
	while (sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(1600));
}