/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 15:35:57 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 15:35:57 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void 	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int		main(void)
// {
// 	int		a = 16;
// 	int		b = 3;
// 	int		div, mod;

// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d / %d = %d and %d", a, b, div, mod);
// }