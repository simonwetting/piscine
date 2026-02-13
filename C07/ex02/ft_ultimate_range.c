/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 17:03:54 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/12 15:45:15 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		length;
	int		*array;

	if (min >= max)
		return (0);
	length = max - min;
	*range = malloc(sizeof(int) * length);
	array = *range;
	length++;
	while (--length >= 0)
		array[length] = min + length;
	return (1);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int		*range;
// 	//int		**range_address = &range;
// 	int		min = -10;
// 	int		max = 10;
// 	int		length = max - min;
// 	int		n = 0;
// 	int		status;

// 	status = ft_ultimate_range(&range, min, max);
// 	while(n < length)
// 	printf("%d\n", range[n++]);
// }