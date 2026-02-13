/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/09 19:05:27 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/12 15:43:33 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_strlcpy(char *dest, char *src)
{
	int		n;

	n = -1;
	while (src[++n])
		dest[n] = src[n];
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		n;
	int		length;
	int		n_str;

	if (size == 0)
		return (str = malloc(1), str = "", str);
	n = 0;
	length = 0;
	while (n < size)
		length += ft_strlen(strs[n++]);
	str = malloc(length);
	n = 0;
	n_str = 0;
	while (n < size)
	{
		n_str += ft_strlcpy(str + n_str, strs[n]);
		if (n < size -1)
			n_str += ft_strlcpy(str + n_str, sep);
		n++;
	}
	*(str + n_str) = '\0';
	return (str);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char	fill[4][6] = 
// 		{{'t', 'e', 's', 't', '1', '\0'},
// 		{'t', 'e', 's', 't', '5', '\0'},
// 		{'t', 'e', 's', 't', '3', '\0'},
// 		{'t', 'e', 's', 't', '2', '\0'}};
// 	char	sep[4] = {':', ' ', ':', '\0'};

// 	// char	**strs = fill;
// 	char	*strs[] = {"test1", "test5", "test3", "test2"};
// 	printf("%s", ft_strjoin(3, strs, sep));
// }