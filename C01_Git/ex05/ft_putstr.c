/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 15:51:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 15:51:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_putstr(char *str)
{
	for (int n = 0; *(str + n); n++)
		write(1, (str + n), 1);
}

// int		main(void)
// {
// 	ft_putstr("Hello world");
// }