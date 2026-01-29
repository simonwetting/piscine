/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 19:18:49 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/28 19:18:49 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		n = 0;
	int		count = 0;

	while (dest[count])
		count++;
	while (n < size && src[n])
	{
		dest[count + n] = src[n];
		n++;
	}
	dest[count + n] = '\0';
	return (count + size);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest[100] = "Hello world";
	char	*src = "Test";
	int		n = 0;
	printf("%d", ft_strlcat(dest, src, 4));
	printf("%s", dest);
}