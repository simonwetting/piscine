/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 16:47:45 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/06 16:47:45 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int *ft_range(int min, int max)
{
	int		length;
	int		*range;

	length = max - min;
	range = malloc(length);
	length;
	while (--length >= 0)
		range[length] = min + length;
	return (range);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		*range;
// 	int		min = -10;
// 	int		max = 10;
// 	int		length = max - min;
// 	int		n = 0;

// 	range = ft_range(min, max);
// 	while(n < length)
// 	printf("%d\n", range[n++]);
// }