/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 09:15:41 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/29 15:33:19 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	int_to_array(int i, int *array)
{
	int		count;
	int		tmp[10];
	int		loop;

	count = 0;
	loop = -1;
	while (i > 0)
	{
		tmp[count++] = i % 10;
		i /= 10;
	}
	while (++loop < count)
		array[loop] = tmp[count - loop - 1];
	return (count);
}

void	put_zero_and_comma(int amount, int comma)
{
	int		n;

	n = -1;
	if (comma)
		write(1, ", ", 2);
	while (++n < amount)
		write(1, "0", 1);
}

int	put_unique(int *array, int size, int n, int comma)
{
	int		loop;
	int		loop2;
	char	c;

	loop = -1;
	while (++loop < size - 1)
		if (array[loop] > array[loop + 1])
			return (0);
	loop = -1;
	while (++loop < size)
	{
		loop2 = -1;
		while (++loop2 < size)
			if (loop != loop2 && array[loop] == array[loop2])
				return (0);
	}
	put_zero_and_comma(n - size, comma);
	loop = -1;
	while (++loop < size)
	{
		c = '0' + array[loop];
		write(1, &c, 1);
	}
	return (1);
}

void	ft_print_combn(int n)
{
	int		max_int;
	int		m;
	int		not_first_number;
	int		int_array[10];
	int		size;

	not_first_number = 0;
	m = 0;
	max_int = 1;
	while (m < n)
	{
		max_int *= 10;
		m++;
	}
	if (n == 9)
		max_int = 123456790;
	m = -1;
	while (++m < max_int)
	{
		size = int_to_array(m, int_array);
		put_unique(int_array, size, n, not_first_number);
		not_first_number = 1;
	}
	write(1, "\n", 1);
}

// int	main(void)
// {
// 	ft_print_combn(9);
// }