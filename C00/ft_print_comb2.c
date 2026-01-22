/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/21 18:30:35 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/21 18:30:35 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	lastdigit(int i)
{
	return i % 10;
}

int	*int_to_array(int i)
{
	
}

int	main(void)
{
	int array[4];
	char	c;
	int		i;

	i = 1234;
	for (int n = 0; n < 4; n++)
	{
		array[n] = lastdigit(i);
		i /= 10;
	}
	for (int n = 0; n <4; n++)
	{
		c = '0' + array[n];
		write(1, &c, 1);
	}
}