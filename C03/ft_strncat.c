/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 08:58:06 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/28 08:58:06 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		n = 0;
	int		count = 0;

	while (dest[count])
		count++;
	while (n < nb && src[n])
	{
		dest[count + n] = src[n];
		n++;
	}
	dest[count + n] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[100] = "Hello world";
// 	char	*src = "Test test";
// 	int		n = 0;
// 	ft_strncat(dest, src, 2);
// 	printf("%s", dest);
// }