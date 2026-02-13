/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/12 11:19:39 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/12 15:00:39 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	find_in_base(char c, char *base)
{
	int		n;

	n = -1;
	while (base[++n])
		if (c == base[n])
			return (n);
	return (-1);
}

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

int	prefix(char **pointer)
{
	int		n;
	int		negative;
	char	*str;

	n = 0;
	negative = 1;
	str = *pointer;
	while (str[n] == ' ' || (str[n] >= 9 && str[n] <= 13))
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
	long	number;
	int		base_count;

	n = 0;
	negative = prefix(&str);
	number = 0;
	base_count = 0;
	while (base[base_count])
		base_count++;
	if (base_count < 2 || base_invalid(base))
		return (0);
	while (find_in_base(str[n], base) >= 0)
	{
		number *= base_count;
		number += find_in_base(str[n++], base);
	}
	return (negative * number);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <assert.h>

// int	main(void)
// {
// 	printf("ft%d\n", ft_atoi_base("2147483648", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483648"));
// 	//assert(ft_atoi_base("2147483648", "0123456789") == atoi("2147483648"));
// 	printf("ft%d\n", ft_atoi_base("2147483649", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483649"));
// 	//assert(ft_atoi_base("2147483649", "0123456789") == atoi("2147483649"));
// 	printf("ft%d\n", ft_atoi_base("2147483647", "0123456789"));
// 	printf("at%d\n\n", atoi("2147483647"));
// 	printf("ft%d\n", ft_atoi_base("+0", "0123456789"));
// 	printf("at%d\n\n", atoi("+0"));
// 	printf(">at %d\n", atoi("-2147483648"));
// 	printf(">ft %d\n", ft_atoi_base("-2147483648", "0123456789"));
// 	printf(">ft %d\n", ft_atoi_base("-2", "0123456789"));
// 	printf(">at %d\n\n", atoi("-2"));
// 	printf("overlfow>ft %d\n", ft_atoi_base("2147483648", "0123456789"));
// 	printf("overlfow>at %d\n\n", atoi("2147483648"));
// 	printf("(2147483647)>ft %d\n", ft_atoi_base("2147483647", "0123456789"));
// 	printf("(2147483647)>at %d\n\n", atoi("2147483647"));
// 	printf("?? ft %d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("?? at %d\n\n", atoi("-10"));
// 	printf("ft %d\n", ft_atoi_base("+10", "0123456789"));
// 	printf("at %d\n", atoi("+10"));
// 	printf("%d\nOTHER BASES\n", atoi("+10"));
// 	printf(">AA>170>%d\n", ft_atoi_base("   AAs", "0123456789ABCDEF"));
// 	printf(">FF>255>%d\n", ft_atoi_base("   FF", "0123456789ABCDEF"));

// 	printf("597>%d\n", ft_atoi_base("255", "0123456789ABCDEF"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF"));
// 	printf("255>%d\n", ft_atoi_base("255", "0123456789"));
// 	printf("0>%d\n", ft_atoi_base("255", "26"));
// 	printf("3>%d\n", ft_atoi_base("255", "25"));
// 	printf("3>%d\n", ft_atoi_base("011", "01"));
// 	printf("0>%d\n", ft_atoi_base("255", "01"));
// 	printf("2>%d\n", ft_atoi_base("10", "01"));
// 	printf("1010>base2>10>%d\n", ft_atoi_base("1010", "01"));
// 	printf("-10>%d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("10>%d\n", ft_atoi_base("+10", "0123456789"));

// 	printf("INVALID INPUT\n");
// 	printf("%d\n", ft_atoi_base("AA", ""));
// 	printf("%d\n", ft_atoi_base("FF", "F"));
// 	printf("%d\n", ft_atoi_base("", "0123456789ABCDEF"));
// 	printf("%d\n", ft_atoi_base("", ""));
// 	printf("PLus and minus\n");
// 	printf("-+ato>%d\n", atoi("-+10"));
// 	printf("-+ft>%d\n", ft_atoi_base("-+10", "0123456789"));
// 	printf("+-at>%d\n", atoi("+-10"));
// 	printf("+-ft>%d\n", ft_atoi_base("+-10", "0123456789"));
// 	printf("--at>%d\n", atoi("--10"));
// 	printf("--ft>%d\n", ft_atoi_base("--10", "0123456789"));
// 	printf("++at>%d\n", atoi("++10"));
// 	printf("++ft>%d\n", ft_atoi_base("++10", "0123456789"));
// 	// //test
// 	// printf("str[%d]=%c\n", n , str[n]);
// 	printf("-1234>%d\n", ft_atoi_base(" ---+--+1234ab567", "0123456789"));
// 	printf(">ft %d\n", ft_atoi_base("-2147483648", "0123456789"));
// 	printf(">ft %d\n", ft_atoi_base("-+-+-++2147483648", "0123456789"));

// 	printf("?? ft %d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("?? at %d\n\n", atoi("-10"));
// 	printf("?? ft %d\n", ft_atoi_base("-100", "0123456789"));
// 	printf("?? at %d\n\n", atoi("-100"));
// 	printf("597>%d\n", ft_atoi_base("255", "0123456789ABCDEF"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF"));
// 	printf("255>%d\n", ft_atoi_base("255", "0123456789"));
// 	printf("0>%d\n", ft_atoi_base("255", "26"));
// 	printf("3>%d\n", ft_atoi_base("255", "25"));
// 	printf("3>%d\n", ft_atoi_base("011", "01"));
// 	printf("0>%d\n", ft_atoi_base("255", "01"));
// 	printf("2>%d\n", ft_atoi_base("10", "01"));
// 	printf("1010>base2>10>%d\n", ft_atoi_base("1010", "01"));
// 	printf("-10>%d\n", ft_atoi_base("-10", "0123456789"));
// 	printf("10>%d\n", ft_atoi_base("+10", "0123456789"));
// 	printf("Invalid base\n\n");
// 	printf("AA>170>%d\n", ft_atoi_base("AA", ""));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEFF"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF+"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF-"));
// 	printf("AA>170>%d\n", ft_atoi_base("AA", "0123456789ABCDEF"));

// 	printf("AA>170>%d\n", ft_atoi_base("BB", "AB"));
// }