/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 09:59:12 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 10:33:49 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		n;

	n = 2;
	if (nb < 2)
		return (0);
	while (n < nb)
		if (nb % n++ == 0)
			return (0);
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("0 %d\n", ft_is_prime(-1));
// 	printf("0 %d\n", ft_is_prime(-4));
// 	printf("0 %d\n", ft_is_prime(0));
// 	printf("0 %d\n", ft_is_prime(1));
// 	printf("1 %d\n", ft_is_prime(2));
// 	printf("1 %d\n", ft_is_prime(3));
// 	printf("0 %d\n", ft_is_prime(4));
// 	printf("1 %d\n", ft_is_prime(5));
// 	printf("0 %d\n", ft_is_prime(6));
// 	printf("1 %d\n", ft_is_prime(7));
// 	printf("0 %d\n", ft_is_prime(8));
// 	printf("1 %d\n", ft_is_prime(11));
// 	printf("1 %d\n", ft_is_prime(13));
// 	printf("0 %d\n", ft_is_prime(14));
// 	printf("1 %d\n", ft_is_prime(17));
// 	printf("1 %d\n", ft_is_prime(19));
// 	printf("1 %d\n", ft_is_prime(23));
// 	printf("1 %d\n", ft_is_prime(167));
// 	printf("0 %d\n", ft_is_prime(172));
// 	printf("1 %d\n", ft_is_prime(173));
// 	printf("0 %d\n", ft_is_prime(189));
// 	printf("1 %d\n", ft_is_prime(179));
// 	printf("0 %d\n", ft_is_prime(1633));
// 	printf("1 %d\n", ft_is_prime(2147483647));
// 	printf("0 %d\n", ft_is_prime(-2147483648));
// 	printf("should fail %d\n", ft_is_prime(561));
// 	printf("should fail %d\n", ft_is_prime(1105));
// 	printf("should fail %d\n", ft_is_prime(1729));
// 	printf("should fail %d\n", ft_is_prime(2465));
// 	printf("should fail %d\n", ft_is_prime(2821));
// 	printf("should fail %d\n", ft_is_prime(6601));
// }