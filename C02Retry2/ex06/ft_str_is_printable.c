/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:25:00 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/03 11:35:31 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int		index;

	index = -1;
	while (str[++index])
		if (str[index] < 32 || str[index] > 126)
			return (0);
	return (1);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	*str = "testasdad";
// 	printf("%d", ft_str_is_printable(str));
// }