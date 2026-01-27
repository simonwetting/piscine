/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:41:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 11:41:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		n;
	int		first_char;

	n = 0;
	first_char = 1;
	while (*(str + n))
	{
		if (*(str + n) == ' ')
			first_char = 1;
		if (*(str + n) >= 'a' && *(str + n) <= 'z' && first_char == 1)
		{
			*(str + n) = *(str + n) - 32;
			first_char = 0;
		}
		n++;
	}
	return str;
}

int		main()
{
	char	str[17] = "test this string";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}