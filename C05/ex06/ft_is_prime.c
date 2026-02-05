/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 09:59:12 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 09:59:12 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int		primes[7] = {2 , 3, 5, 7, 11, 13, 23};
	int		n;

	n = -1;
	while (++n < 7)
		if (nb % primes[n] == 0)
			return (0);
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(163));
	printf("%d\n", ft_is_prime(160));
	printf("%d\n", ft_is_prime(167));
	printf("%d\n", ft_is_prime(172));
	printf("%d\n", ft_is_prime(173));
	printf("%d\n", ft_is_prime(189));
	printf("%d\n", ft_is_prime(179));
	printf("%d\n", ft_is_prime(1633));
}