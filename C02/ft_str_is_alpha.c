/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/26 16:19:37 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/26 16:19:37 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_alpha(char *str)
{
	int		n;

	n = 0;
	while (*(str + n))
	{
		if (*(str + n) >= 'a' && *(str + n) <= 'z' || *(str + n) >= 'A' && *(str + n) <= 'Z')
			n++;
		else
			return 0;
	}
	return 1;
}

int		main(void)
{
	char	*str = "heHSll o";
	printf("%d", ft_str_is_alpha(str));
}