/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:50:12 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/03 14:34:10 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while (s1[n] && s2[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (s1[n] - s2[n]);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char *s1 = "1";
// 	char *s2 = "";

// 	printf("%d", ft_strcmp(s1, s2));
// }