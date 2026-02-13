/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/23 10:44:44 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/23 10:44:44 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = -1;
	while (src[++index] && index < n)
		dest[index] = src[index];
	while (index < n)
		dest[index++] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <unistd.h>
// int		main()
// {
// 	char	string[12]  = "Hello world\n";
// 	char	*string2 = "Holla";
// 	// char	*string3 = "Holla Holla\n";

// 	write(1, string, 12);
// 	ft_strncpy(string, string2, 11);
// 	write(1, string, 12);
// 	// for (int n = 0; *(string2 + n); n++)
// 	// 	*(string + n) = *(string2 + n);
// 	// for (int n = 0; *(string + n); n++)
// 	// 	write(1, (string + n), 1);
// 	// write(1, string, 12);
// 	// ft_strncpy(string, string3, 12);
// 	// write(1, string, 12);
// }