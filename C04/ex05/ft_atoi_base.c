/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 14:17:47 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/11 15:05:47 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	factor_base(int i, int factor, int base)
{
	int		n;

	n = -1;
	while (++n < factor - 1)
		i *= base;
	return (i);
}

int	array_to_int(int *array, int size, int base)
{
	int			n;
	int			output;

	n = -1;
	output = 0;
	while (++n < size)
		output += factor_base(array[n], size - n, base);
	return (output);
}

int	find_in_base(char c, char *base)
{
	int		n;

	n = -1;
	while (base[++n])
		if (c == base[n])
			return (n);
	return (-1);
}

int	prefix(char **pointer)
{
	int		n;
	int		negative;
	char	*str;

	str = *pointer;
	n = 0;
	negative = 1;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == ' ')
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			negative *= -1;
		n++;
	}
	*pointer += n;
	return (negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int		n;
	int		negative;
	int		count_digits;
	int		number[10];
	int		count_base;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	count_base = 0;
	while (base[count_base])
		count_base++;
	n = 0;
	count_digits = 0;
	negative = prefix(&str);
	while (str[n])
	{
		number[count_digits] = find_in_base(str[n], base);
		if (number[count_digits] < 0)
			return (0);
		count_digits++;
		n++;
	}
	return (negative * array_to_int(number, count_digits, count_base));
}

// #include <stdlib.h>
// #include <assert.h>
// int	main(void)
// {
// 	printf("ft%d\n", ft_atoi_base("2147483648", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483648"));
// 	assert(ft_atoi_base("2147483648", "0123456789") == atoi("2147483648"));
// 	printf("ft%d\n", ft_atoi_base("2147483649", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483649"));
// 	assert(ft_atoi_base("2147483649", "0123456789") == atoi("2147483649"));
// 	printf("ft%d\n", ft_atoi_base("2147483647", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483647"));
// 	printf("ft%d\n", ft_atoi_base("+0", "0123456789"));
// 	printf("at%d\n\n", atoi("+0"));
// 	printf(">ft %d\n", ft_atoi_base("-2147483648", "0123456789"));
// 	printf(">at %d\n\n", atoi("-2147483648"));
// 	printf(">ft %d\n", ft_atoi_base("-2", "0123456789"));
// 	printf(">at %d\n\n", atoi("-2"));
// 	printf(">ft %d\n", ft_atoi_base("--2147483648", "0123456789"));
// 	printf(">at %d\n\n", atoi("--2147483648"));
// 	printf("ft %d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("at %d\n\n", atoi("-10"));
// 	printf("ft %d\n", ft_atoi_base("+10", "0123456789"));
// 	printf("at %d\n", atoi("+10"));
// 	printf("%d\nOTHER BASES\n", atoi("+10"));

// 	printf("597>%d\n", ft_atoi_base("255", "0123456789ABCDEF"));
// 	printf("AA>%d\n", ft_atoi_base("AA", "0123456789ABCDEF"));
// 	printf("255>%d\n", ft_atoi_base("255", "0123456789"));
// 	printf("0>%d\n", ft_atoi_base("255", "26"));
// 	printf("3>%d\n", ft_atoi_base("255", "25"));
// 	printf("3>%d\n", ft_atoi_base("011", "01"));
// 	printf("0>%d\n", ft_atoi_base("255", "01"));
// 	printf("2>%d\n", ft_atoi_base("10", "01"));
// 	printf("1010>base2>10>%d\n", ft_atoi_base("1010", "01"));
// 	printf("-10>%d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("10>%d\n", ft_atoi_base("+10", "0123456789"));

// 	printf(">AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF"));
// 	printf(">FF>255>%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));

// 	printf("INVALID INPUT\n");
// 	printf("%d\n", ft_atoi_base("AA", ""));
// 	printf("%d\n", ft_atoi_base("FF", "F"));
// 	printf("%d\n", ft_atoi_base("", "0123456789ABCDEF"));
// 	printf("%d\n", ft_atoi_base("", ""));
// 	printf("PLus and minus\n");
// 	printf("ato>%d\n", atoi("-+10"));
// 	printf("ft>%d\n", ft_atoi_base("-+10", "0123456789"));
// 	printf("at>%d\n", atoi("+-10"));
// 	printf("ft>%d\n", ft_atoi_base("+-10", "0123456789"));
// 	printf("at>%d\n", atoi("--10"));
// 	printf("ft>%d\n", ft_atoi_base("--10", "0123456789"));
// 	printf("at>%d\n", atoi("++10"));
// 	printf("ft>%d\n", ft_atoi_base("++10", "0123456789"));
// 	//test
// }