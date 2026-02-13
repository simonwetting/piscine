/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 10:01:49 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/10 10:05:55 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int		output;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	output = nb;
	while (power-- > 1)
		output *= nb;
	return (output);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n", ft_iterative_power(2, -1));
// 	printf("%d\n", ft_iterative_power(2, 0));
// 	printf("%d\n", ft_iterative_power(2, 1));
// 	printf("%d\n", ft_iterative_power(2, 2));
// 	printf("%d\n", ft_iterative_power(2, 3));
// 	printf("%d\n\n", ft_iterative_power(2, 4));

// 	printf("%d\n", ft_iterative_power(-2, -1));
// 	printf("%d\n", ft_iterative_power(-2, 0));
// 	printf("%d\n", ft_iterative_power(-2, 1));
// 	printf("%d\n", ft_iterative_power(-2, 2));
// 	printf("%d\n", ft_iterative_power(-2, 3));
// 	printf("%d\n", ft_iterative_power(-2, 4));
// }
