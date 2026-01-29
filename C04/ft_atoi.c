/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 10:48:21 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/29 10:48:21 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	factor(int i, int factor)
{
	int		n;

	n = 0;
	while (n < factor)
		i *= 10;
	return (i);
}

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

int	array_to_int(int *array, int size)
{
	int		n;
	int		output;

	n = 0;
	output = 0;
	while (n < size)
		output += factor(array[n], size - n++);
	return (output);
}

int ft_atoi(char *str)
{
	int		n;
	int		negative;
	int		count_digits;
	int		number[10];

	n = 0;
	negative = 1;
	count_digits = 0;
	while (ft_isspace(str[n]))
		n++;
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			negative *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		number[count_digits] = str[n] - '0';
		count_digits++;
		n++;
	}
	return (array_to_int(number, count_digits));
}

#include <stdio.h>
int	main(void)
{
	int		i;

	i = ft_atoi("    	+-++--182312");
	printf("%d", i);
}