/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:19:37 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:42:58 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= 'A' && str[index] <= 'Z'))
			index++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// #include <unistd.h>
// int	main(void)
// {
// 	char	*str;

// 	str = "";
// 	printf("%d", ft_str_is_alpha(str));
// }
