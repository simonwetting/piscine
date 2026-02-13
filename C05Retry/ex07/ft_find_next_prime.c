/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 10:14:24 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 10:49:14 by swetting      ########   odam.nl         */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("-7 %d\n", ft_find_next_prime(-7));
// 	printf("-2 %d\n", ft_find_next_prime(-2));
// 	printf("-1 %d\n", ft_find_next_prime(-1));
// 	printf("0 %d\n", ft_find_next_prime(0));
// 	printf("1 %d\n", ft_find_next_prime(1));
// 	printf("2 %d\n", ft_find_next_prime(2));
// 	printf("3 %d\n", ft_find_next_prime(3));
// 	printf("4 %d\n", ft_find_next_prime(4));
// 	printf("5 %d\n", ft_find_next_prime(5));
// 	printf("8 %d\n", ft_find_next_prime(8));
// 	printf("11 %d\n", ft_find_next_prime(11));
// 	printf("18>%d\n", ft_find_next_prime(18));
// 	printf("20 %d\n", ft_find_next_prime(20));
// 	printf("23 %d\n", ft_find_next_prime(23));
// 	printf("29 %d\n", ft_find_next_prime(29));
// 	printf("31 %d\n", ft_find_next_prime(31));
// 	printf("36 %d\n", ft_find_next_prime(36));
// 	printf("37 %d\n", ft_find_next_prime(37));
// 	printf("189 %d\n", ft_find_next_prime(189));
// 	printf("179 %d\n", ft_find_next_prime(179));
// 	printf("1633 %d\n", ft_find_next_prime(1633));
// 	printf("max int %d\n", ft_find_next_prime(2147483647));
// 	printf("2147483640 %d\n", ft_find_next_prime(2147483646));
// 	printf("2 %d\n", ft_find_next_prime(-2147483648));
//test
// }