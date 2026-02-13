/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base2.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/12 12:59:53 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/12 15:48:25 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);

int	base_invalid(char *str)
{
	int		n;
	int		m;

	n = 0;
	while (str[n])
	{
		if (str[n] == '+' || str[n] == '-' || (str[n] >= 9 && str[n] <= 13))
			return (1);
		m = -1;
		while (str[++m])
			if (str[n] == str[m] && n != m)
				return (1);
		n++;
	}
	return (0);
}

int	length_number(long number, int base)
{
	int		length;

	if (number < 0)
		number *= -1;
	length = 0;
	while (number > 0)
	{
		length++;
		number /= base;
	}
	return (length);
}

char	*itoa_base(long number, char *base, char *str)
{
	int		n;
	int		skip_minus;
	int		base_count;
	int		length;

	n = 0;
	skip_minus = 0;
	base_count = 0;
	while (base[base_count])
		base_count++;
	length = length_number(number, base_count);
	if (number < 0)
	{
		str[n] = '-';
		skip_minus = 1;
		str += skip_minus;
		number *= -1;
	}
	while (number > 0)
	{
		str[length - n - 1] = base[number % base_count];
		number /= base_count;
		n++;
	}
	return (str[n] = '\0', str - skip_minus);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*str;

	number = ft_atoi_base(nbr, base_from);
	if (base_invalid(base_from) || base_invalid(base_to))
		return (0);
	if (number > 2147483647 || number < -2147483648)
		return (0);
	str = malloc(sizeof(char) * 32);
	return (itoa_base(number, base_to, str));
}

#include <stdio.h>
int		main(void)
{
	// printf("%s\n", ft_convert_base("1010", "01", "0123456789"));
	// char *str = ft_convert_base("1010", "01", "0123456789");
	// char *str = ft_convert_base("-12345", "0123456789", "0123456789");
	// char *str = ft_convert_base("12345", "0123456789", "0123456789");
	// char *str = ft_convert_base("-10", "0123456789", "01");
	char *str = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
	// for (int n = 0; n < 6; n++)
	// 	printf("%d>%c\n", n, str[n]);
	printf("%s\n", str);
	// printf("str[%d] = %c\n", length - n - 1, base[number % base_count]);
	printf("char = %c && int = %ld \n", base[number % base_count], number % base_count);
}