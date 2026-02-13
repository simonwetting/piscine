/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/27 11:41:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/02 14:46:00 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

// int	ft_str_is_alpha(char c)
// {
// 	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'Z'))
// 			return (1);
// 	return (0);
// }

int	ft_str_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	ft_str_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int		n;

	n = 0;
	while (str[n])
	{
		if (n == 0 && is_lowercase(str[n]))
			str[n] -= 32;
		else if (ft_str_is_numeric(str[n - 1]) == 0
			&& ft_str_is_alpha(str[n - 1]) == 0 && is_lowercase(str[n]))
			str[n] -= 32;
		else if (ft_str_is_uppercase(str[n]) && (ft_str_is_numeric(str[n - 1])
				|| ft_str_is_alpha(str[n - 1])))
			str[n] += 32;
		n++;
	}
	return (str);
}

// #include <stdio.h>
// #include <unistd.h>
// int		main()
// {

// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s\n", str);
// }