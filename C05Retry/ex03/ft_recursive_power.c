/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 19:25:02 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 10:32:32 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(-2, -1));
// 	printf("%d\n", ft_recursive_power(-2, 0));
// 	printf("%d\n", ft_recursive_power(-2, 1));
// 	printf("%d\n", ft_recursive_power(-2, 2));
// 	printf("%d\n", ft_recursive_power(-2, 3));
// 	printf("%d\n", ft_recursive_power(-2, 4));
// 	printf("%d\n\n", ft_recursive_power(-2, 5));
// 	printf("%d\n", ft_recursive_power(2, -1));
// 	printf("%d\n", ft_recursive_power(2, 0));
// 	printf("%d\n", ft_recursive_power(2, 1));
// 	printf("%d\n", ft_recursive_power(2, 2));
// 	printf("%d\n", ft_recursive_power(2, 3));
// 	printf("%d\n", ft_recursive_power(2, 4));
// 	printf("%d\n", ft_recursive_power(2, 5));
// }