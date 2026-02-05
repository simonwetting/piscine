/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 19:39:19 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/04 19:39:19 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	int		fib1;
	int		fib2;
	int		tmp;

	if (index == 0)
		return (0);
	fib1 = 0;
	fib2 = 1;
	while (index-- > 0)
	{
		tmp = fib1 + fib2;
		fib1 = fib2;
		fib2 = tmp;
	}
	return(fib2);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(4));
}