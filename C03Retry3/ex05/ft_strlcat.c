/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 19:18:49 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 12:54:47 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		n;
	unsigned int		dest_length;
	unsigned int		src_length;

	n = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[src_length])
		src_length++;
	if (size <= dest_length)
		return (src_length + size);
	while (n < size - dest_length -1 && src[n])
	{
		dest[dest_length + n] = src[n];
		n++;
	}
	dest[dest_length + n] = '\0';
	return (dest_length + src_length);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[100] = "abc";
// 	char	dest2[100] = "abc";
// 	char	*src = "abc";
// 	int		n = 0;

// 	printf("%s\n", dest);
// 	n = ft_strlcat(dest, src, 8);
// 	printf("%s\n", dest);
// 	printf("%d\n\n", n);

// 	printf("%s\n", dest2);
// 	n = strlcat(dest2, src, 8);
// 	printf("%s\n", dest2);
// 	printf("%d\n\n", n);
// }