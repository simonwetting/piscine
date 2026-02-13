/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 17:14:11 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 14:01:31 by swetting      ########   odam.nl         */
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

// int	main(void)
// {
// 	ft_putstr("\n");
// 	ft_putstr("test");
// 	ft_putstr("");
// 	ft_putstr("test");
// }