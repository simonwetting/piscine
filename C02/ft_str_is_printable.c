/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:25:00 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 11:25:00 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		 ft_str_is_printable(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) < 33 || *(str + n) > 126)
			return 0;
		n++;
	}
	return 1;
}

int		main(void)
{
	char	*str = "asdBU&*asd";
	printf("%d", ft_str_is_printable(str));
}