/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:38:32 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/26 16:38:32 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) >= 'a' || *(str + n) <= 'z')
			return 0;
		n++;
	}
	return 1;
}

int		main(void)
{
	char	*str = "asdasd";
	printf("%d", ft_str_is_lowercase(str));
}