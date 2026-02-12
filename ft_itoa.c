/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/12 09:37:47 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/12 09:37:47 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length_nbr(long nbr)
{
	int		length;

	length = 0;
	while (nbr > 0)
	{
		length++;
		nbr /= 10;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	nb;
	int		n;
	int		length;

	nb = nbr;
	n = 0;
	str = malloc(sizeof(char) * 11);
	if (nb < 0)
	{
		str[n] = '-';
		str++;
		nb *= -1;
	}
	length = length_nbr(nb);
	while (n < length)
	{
		str[length - n] = nb % 10 + '0';
	}
	str[n] = '\0';
	if (nbr < 0)
		str--;
	return (str);
}

#include <stdio.h>
int		main(void)
{
	// printf("%d", -11 % 10);
	printf("%s", ft_itoa(-12345));
}