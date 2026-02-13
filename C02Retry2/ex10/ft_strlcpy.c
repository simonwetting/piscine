/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:51:13 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 17:29:44 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	length;

	n = 0;
	while (src[n] && dest[n] && n < size - 1)
	{
		dest[n] = src[n];
		n++;
	}
	if (size > 0)
		dest[n] = '\0';
	length = 0;
	while (src[length])
		length++;
	return (length);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int		main(void)
// {
// 	char 	dest[] = "Hello world world world";
// 	char	src[10] = "test test";
// 	int 	length = strlcpy(dest, src, 14);

// 	printf("%s\nlength=%d", dest, length);
// }
