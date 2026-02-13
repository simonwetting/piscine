/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/06 10:39:36 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/09 13:21:24 by swetting      ########   odam.nl         */
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
		ft_putstr(args[argcount - n++]);
}
