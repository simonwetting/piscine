/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:08:16 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 17:08:16 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int		n;
	
	n = 0;
	while (str[n])
		n++;
	return (n);
}

// int	main(void)
// {
// 	printf("%d", ft_strlen("test"));
// }