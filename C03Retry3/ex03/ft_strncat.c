/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 08:58:06 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/04 13:10:35 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	int				count;

	n = 0;
	count = 0;
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

// #include <unistd.h>
// int	main(void)
// {
// 	char	dest[100] = "Hello world";
// 	char	*src = "Test";
// 	// int		n = 0;
// 	ft_strncat(dest, src, 0);
// 	write(1, dest, 30);
// 	//printf("%s", dest);
// }