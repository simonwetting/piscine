/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 19:25:02 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/04 19:25:02 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 3));
}