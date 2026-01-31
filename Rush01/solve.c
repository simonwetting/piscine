/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/31 11:51:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/31 11:51:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//counting with x = 0 (most left) 0 to x=  3 (most right), top = 0; bottom = 1;
//counting with y = 0 (top) and y = 3 (bottom), Left = 0; right = 1;

void	fill4and1(char **visible_LR, char ** visible_TB, char **positions)
{
	char	x;
	char	y;
	char	side;

	x = 0;
	y = 0;
	side = 0;
	while (y < 4)
	{
		if (visible_LR[y][0] == 4)
			positions[y][0] = 1;
		if (visible_LR[y][1] == 4)
			positions[y][3] = 1;
		y++;
	}
	while (x < 4)
	{
		if (visible_TB[x][0] == 4)
			positions[x][0] = 1;
		if (visible_TB[x][1] == 4)
			positions[x][3] = 1;
		x++;
	}
}

int		main(void)
{
	char	visible_left_right[4][2];
	char	visible_top_bottom[4][2];
	char	positions[4][4];

	fill_4and1(positions);
}