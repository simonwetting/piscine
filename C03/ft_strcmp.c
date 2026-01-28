/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:50:12 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 17:50:12 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

// int	main(void)
// {
// 	char *s1 = "Hello worle";
// 	char *s2 = "Hello world";

// 	printf("%d", ft_strcmp(s1, s2));
// }