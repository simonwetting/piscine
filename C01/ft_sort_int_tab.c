/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_int_tab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/22 18:07:42 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/22 18:07:42 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *b;
	*b = c;
}

void 	ft_sort_int_tab(int *tab, int size)
{
	char	unsorted;

	unsorted = 1;
	while (unsorted)
	{
		unsorted = 0;
		for (int n = 0; n < size - 1; n++)
			if (*(tab + n) > *(tab + n + 1))
			{
				unsorted = 1;
				ft_swap(tab + n, tab + n + 1);
			}
	}
}

int		main(void)
{
	int		table[6] = {0, 5, 2, 1, 4, 5};
	for (int n = 0; n < 6; n++)
		printf("[%d] = %d\n", n, table[n]);
	ft_sort_int_tab(table, 6);
	printf("\n");
	for (int n = 0; n < 6; n++)
		printf("[%d] = %d\n", n, table[n]);
}