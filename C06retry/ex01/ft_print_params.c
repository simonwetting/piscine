/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 17:18:52 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/09 13:20:34 by swetting      ########   odam.nl         */
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
	write(1, "\n", 1);
}

int	main(int argcount, char **args)
{
	int		n;

	n = 1;
	while (n < argcount)
		ft_putstr(args[n++]);
}
