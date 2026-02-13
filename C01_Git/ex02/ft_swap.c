/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 11:41:42 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 11:41:42 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int		main(void)
// {
// 	int		a = 5;
// 	int		b = 6;

// 	printf("a>%d\nb>%d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("a>%d\nb>%d\n", a, b);
// }