/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:35:37 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:42:33 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
		if (str[index] < '0' || str[index] > '9')
			return (0);
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	*str = "2a";
// 	printf("%d", ft_str_is_numeric(str));
// }