/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:14:11 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/27 17:14:11 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	write(1, str, count);
}

int	main(void)
{
	char	*str = "Hello world";

	ft_putstr(str);
}