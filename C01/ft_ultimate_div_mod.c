/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 15:47:35 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 15:47:35 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void 	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int		main(void)
// {
// 	int		a = 16;
// 	int		b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div = %d\nmod = %d", a, b);
// }