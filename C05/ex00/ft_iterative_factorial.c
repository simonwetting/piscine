/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 09:49:38 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/04 09:49:38 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int		output;
	int		n;

	output = 1;
	n = 1;
	while (n <= nb)
		output *= n++;
	return (output);
}

#include <stdio.h>
int		main(void)
{
	printf("%d", ft_iterative_factorial(3));
}