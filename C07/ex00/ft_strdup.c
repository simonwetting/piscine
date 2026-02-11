/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 16:47:52 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/06 16:47:52 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strdup(char *src)
{
	int		length;
	char	*dup;

	length = 0;
	while (src[length])
		length++;
	dup = malloc(length);
	length = -1;
	while (src[++length])
		dup[length] = src[length];
	return (dup);
}

// #include <stdio.h>
// int		main(void)
// {
// 	char *str = "Hello world";
// 	char *dup = ft_strdup(str);

// 	printf("%s", dup);
// }