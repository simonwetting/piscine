/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:33:03 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 11:33:03 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) >= 'a' && *(str + n) <= 'z')
			*(str + n) = *(str + n) - 32;
		n++;
	}
	return str;
}

int		main()
{
	char	str[5] = "test";

	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
}