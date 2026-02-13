/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 18:14:50 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:43:25 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
		if (str[index] < 'A' || str[index] > 'Z')
			return (0);
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	*str = "";
// 	printf("%d", ft_str_is_uppercase(str));
// }