/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:56:59 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 17:56:59 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, int size)
{
	int		n;

	n = 0;
	while(s1[n] && s2[n] && n + 1 < size)
	{
		if (s1[n] != s2[n])
			return (s1[n] -s2[n]);
		n++;
	}
	return (s1[n] -s2[n]);
} 

int	main(void)
{
	char *s1 = "Hello worle";
	char *s2 = "Hello world";

	printf("%d", ft_strncmp(s1, s2, 11));
}