/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/29 18:17:10 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/29 18:17:10 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (1);
	else
		return (0);
}

int	read_prefix(char **str)
{
	int		n;
	int		negative;

	n = 0;
	negative = 1;
	while (ft_isspace(*(str[n])))
		n++;
	printf("n>%d\n", n);
	while (*(str[n]) == '+' || *(str[n]) == '-')
	{
		if (*(str[n]) == '-')
			negative *= -1;
		n++;
	}
	*str = *str + n;
	printf("n>%d\n", n);
}

void	increment_pointer(char **str, int n)
{
	*str = *str + n;
}

int ft_atoi_base(char *str, char *base)
{
	int		n;
	int		negative;
	int		count_digits;
	int		number[10];

	n = 0;
	negative = 1;
	count_digits = 0;
	read_prefix(&str);
	printf("%s", str);
	while (str[n] >= '0' && str[n] <= '9')
	{
		number[count_digits] = str[n] - '0';
		count_digits++;
		n++;
	}
	//printf("%d digits\n", count_digits);
	//return (negative * array_to_int(number, count_digits));
}

int	main(void)
{
	char	*str = "Hello world";

	// printf("%s\n", str);
	// increment_pointer(&str, 3);
	// printf("%s\n", str);
	//ft_atoi_base("    +--+-12345", "0123456789");
	int	c = 140;
	write(1, &c, 1);
}