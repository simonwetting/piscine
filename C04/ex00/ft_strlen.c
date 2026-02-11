/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:08:16 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 14:00:59 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int		n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	printf("%d\n", ft_strlen(""));
// 	printf("%lu\n", strlen(""));
// 	printf("%d\n", ft_strlen("a"));
// 	printf("%lu\n", strlen("a"));
// 	printf("%d\n", ft_strlen("ab"));
// 	printf("%lu\n", strlen("ab"));
// }