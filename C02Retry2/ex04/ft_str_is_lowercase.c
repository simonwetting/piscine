/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:38:32 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:43:17 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
		if (str[index] < 'a' || str[index] > 'z')
			return (0);
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	*str = "asdAD";
// 	printf("%d", ft_str_is_lowercase(str));
// }