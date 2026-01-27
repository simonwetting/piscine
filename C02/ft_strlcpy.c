/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:51:13 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 11:51:13 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		n;

	n = 0;
	while (src[n] && dest[n] && n < size - 1)
	{
		dest[n] = src[n];
		n++;
	}
	if (size > 0)
		dest[n] = '\0';
}

int		main(void)
{
	char 	dest[12] = "Hello world";
	char	src[10] = "test test";

	ft_strlcpy(dest, src, 4);
	printf("%s\n", dest);
}
