/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 18:14:50 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/26 18:14:50 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) < 'A' || *(str + n) > 'Z')
			return 0;
		n++;
	}
	return 1;
}

int		main(void)
{
	char	*str = "IBUBY";
	printf("%d", ft_str_is_uppercase(str));
}