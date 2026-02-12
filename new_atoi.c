/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_atoi.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/12 09:12:55 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/12 09:12:55 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_atoi(char *str)
{
	int		negative;
	int		n;
	long	number;

	negative = 1;
	n = 0;
	number = 0;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == ' ')
		n++;
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			negative *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		number *= 10;
		number += str[n++] - '0';
	}
	printf("number>%d\n", number);
	return (number * negative);
}

#include <stdlib.h>
int		main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	printf("%d\n", ft_atoi(" ---+--214783648"));
	printf("%d\n", atoi("214783648"));

}