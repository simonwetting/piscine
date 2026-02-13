/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/04 19:39:19 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/10 10:13:55 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int		fib1;
	int		fib2;
	int		tmp;

	if (index < 0)
		return (-1);
	fib1 = 0;
	fib2 = 1;
	while (index-- > 0)
	{
		tmp = fib1 + fib2;
		fib1 = fib2;
		fib2 = tmp;
	}
	return (fib1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(-1));
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(2));
// 	printf("%d\n", ft_fibonacci(3));
// 	printf("%d\n", ft_fibonacci(4));
// 	printf("%d\n", ft_fibonacci(5));
// 	printf("%d\n", ft_fibonacci(6));
// 	printf("%d\n", ft_fibonacci(7));
// 	printf("%d\n", ft_fibonacci(8));
// }