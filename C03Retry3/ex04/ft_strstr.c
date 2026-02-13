/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 09:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 15:22:26 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		n_str;
	int		n_needle;

	n_str = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n_str])
	{
		if (str[n_str] == to_find[0])
		{
			n_needle = 0;
			while (to_find[n_needle] == str[n_str] || to_find[n_needle] == 0)
			{
				if (to_find[n_needle] == 0)
					return (str + n_str - n_needle);
				n_needle++;
				n_str++;
			}
			n_str -= n_needle;
		}
		n_str++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "hel hhello, world";
// 	char *needle ="hell";
// 	printf("%s\n", ft_strstr(str, needle));
// 	printf("%s", strstr(str, needle));
// }