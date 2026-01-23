/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: swetting <swetting@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/23 18:01:01 by swetting      #+#    #+#                 */
/*   Updated: 2026/01/23 20:41:29 by swetting      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	poopy(int curx, int cury, int x, int y)
{
	if (curx == 1 && cury == 1 || curx == x && cury == y)
		ft_putchar('A');
	else if (curx == 1 && cury == y || cury == 1 && curx == x)
		ft_putchar('C');
	else if (curx == 1 || curx == x || cury == 1 || cury == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		curx;
	int		cury;

	cury = 1;
	while (cury <= y)
	{
		curx = 1;
		while (curx <= x)
		{
			if (x == 1 && y == 1)
			{
				ft_putchar('A');
				break ;
			}
			if (y == 1 && curx == x || x == 1 && cury == y)
			{
				ft_putchar('C');
				break ;
			}
			poopy(curx, cury, x, y);
			curx++;
		}
		ft_putchar('\n');
		cury++;
	}
}
