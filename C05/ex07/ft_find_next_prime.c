/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 10:14:24 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 10:14:24 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb)
{
	int		primes[7] = {2 , 3, 5, 7, 11, 13, 23};
	int		n;

	nb++;
	while (nb < 2147483647)
	{
		n = -1;
		while (++n < 7)
			if (nb % primes[n] == 0)
				break ;
		if (n == 7)
			return (nb);
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(23));
	printf("%d\n", ft_find_next_prime(29));
	printf("%d\n", ft_find_next_prime(31));
	printf("%d\n", ft_find_next_prime(37));
	printf("%d\n", ft_find_next_prime(189));
	printf("%d\n", ft_find_next_prime(179));
	printf("%d\n", ft_find_next_prime(1633));
}