/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 09:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/28 09:09:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while(s1[n] && s2[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] -s2[n]);
		n++;
	}
	return (s1[n] -s2[n]);
}

char *ft_strstr(char *str, char *to_find)
{
	int		n;

	n = 0;
	if (to_find[0] == '\0')
		return str;
	while (str[n])
	{
		if (str[n] == to_find[0])
		{
			if (ft_strcmp(str + n, to_find))
				return str + n;
		}
	}
	return (0);
}

int	main(void)
{
	char *str = "Hello, world";
	char *needle =", ";
	printf("%s", strstr(str, needle));
}