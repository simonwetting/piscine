/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/12 12:59:44 by swetting      #+#    #+#                 */
/*   Updated: 2026/02/12 15:45:24 by swetting      ########   odam.nl         */
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
	while (str[n] == '+' || str[n] == '-')
	{
		if (str[n] == '-')
			negative *= -1;
		n++;
	}
	*pointer += n;
	return (negative);
}

long	ft_atoi_base(char *str, char *base)
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
	if (base_count < 2)
		return (0);
	while (find_in_base(str[n], base) >= 0)
	{
		number *= base_count;
		number += find_in_base(str[n++], base);
	}
	return (negative * number);
}
