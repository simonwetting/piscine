/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 20:01:06 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 20:01:06 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strcpy(char *dest, char *src)
{
	char 	*test = "Hello world";
	int		n;

	n = 0;
	while (*(src + n))
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
}

int		main()
{
	char	string[12]  = "Hello world\n";
	char	*string2 = "Holla";
	char	*string3 = "Holla Holla\n";

	write(1, string, 12);
	ft_strcpy(string, string2);
	// for (int n = 0; *(string2 + n); n++)
	// 	*(string + n) = *(string2 + n);
	// for (int n = 0; *(string + n); n++)
	// 	write(1, (string + n), 1);
	write(1, string, 12);
	ft_strcpy(string, string3);
	write(1, string, 12);
}