/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 09:49:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/10 10:01:47 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		output;
	int		n;

	output = 1;
	n = 1;
	if (nb < 0)
		return (0);
	while (n <= nb)
		output *= n++;
	return (output);
}

// #include <stdio.h>
// int		main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(-2));
// 	printf("%d\n", ft_iterative_factorial(-1));
// 	printf("%d\n", ft_iterative_factorial(0));
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(5));
// }