/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 21:20:26 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 21:20:26 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// char *ft_strcat(char *dest, char *src)
// {
// 	int		count;
// 	int		n;

// 	count = 0;
// 	n = 0;
// 	while (dest[count])
// 		count++;
// 	//printf("%s", src[n]);
// 	//write(1, dest+count+n, 1);
// 	while (src[n])
// 	{
// 		printf("%s\n", dest);
// 		dest[count + n] = src[n++];
// 	}
// 	dest[count + n] = '\0';
// 	return (dest);
// }

char *ft_strcat(char *dest, char *src)
{
	int		n = 0;
	int		count = 0;

	while (dest[count])
		count++;
	while (src[n])
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
// 	ft_strcat(dest, src);
// 	// while (src[n])
// 	// {
// 	// 	dest[11 + n] = src[n];
// 	// 	n++;
// 	// }
// 	// dest[11 + n] = '\0';
// 	//test(dest, src);
// 	printf("%s", dest);
// }