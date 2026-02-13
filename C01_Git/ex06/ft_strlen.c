/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 16:03:36 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 16:03:36 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (*(str+length))
		length++;
	return length;
}

// #include <stdio.h>
// int		main(void)
// {
// 	printf("length = %d", ft_strlen("len\0gth"));
// }