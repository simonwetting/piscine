/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 10:27:47 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/09 13:20:01 by swetting      ########   odam.nl         */
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

int	main(int arg_count, char **args)
{
	int		n;
	char	*str;
	int		slash;

	(void) arg_count;
	str = args[0];
	n = -1;
	while (str[++n])
		if (str[n] == '/')
			slash = n;
	ft_putstr(".");
	ft_putstr(str + slash);
	ft_putstr("\n");
}
