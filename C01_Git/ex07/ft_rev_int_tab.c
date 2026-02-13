/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 16:08:57 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 16:08:57 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	 ft_rev_int_tab(int *tab, int size)
{
	int		reversed[size];

	for(int n = size; n >= 0; n--)
		reversed[size - n -1] = *(tab + n);
	// for (int n = 0; n < 6; n++)
	// 	printf("[%d] = %d\n", n, reversed[n]);
	for(int n = 0; n < 6; n++)
		 *(tab + n) = reversed[n];
}

// #include <stdio.h>
// int		main(void)
// {
// 	int		table[6] = {0, 1, 2, 3, 4, 5};
// 	for (int n = 0; n < 6; n++)
// 		printf("[%d] = %d\n", n, table[n]);
// 	ft_rev_int_tab(table, 6);
// 	for (int n = 0; n < 6; n++)
// 		printf("[%d] = %d\n", n, table[n]);
// }