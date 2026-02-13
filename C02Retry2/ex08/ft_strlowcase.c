/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:40:40 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:43:52 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) >= 'A' && *(str + n) <= 'Z')
			*(str + n) = *(str + n) + 32;
		n++;
	}
	return (str);
}

// #include <stdio.h>
// int		main()
// {
// 	char	str[20] = "tES34t";

// 	printf("%s\n", str);
// 	ft_strlowcase(str);
// 	printf("%s\n", str);
// }