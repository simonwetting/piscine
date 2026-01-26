/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:35:37 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/26 16:35:37 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) < '0' || *(str + n) > '9')
			return 0;
		n++;
	}
	return 1;
}

int		main(void)
{
	char	*str = "96788j87";
	printf("%d", ft_str_is_numeric(str));
}