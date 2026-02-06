/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/05 17:18:52 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/05 17:18:52 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while(s1[n] && s2[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] -s2[n]);
		n++;
	}
	return (s1[n] -s2[n]);
}

void	swap(char *s1, char *s2, int *unsorted)
{
	char	*tmp;

	*unsorted = 1;
	tmp = s2;
	s2 = s1;
	s1 = tmp;
	s1 = 0;
	//write(1, "Swapping", 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	write(1, str, count);
}

int		main(int arg_count, char **args)
{
	int		n;
	int		unsorted;

	unsorted = 1;
	while (unsorted)
	{
		unsorted = 0;
		n = 0;
		while (++n < arg_count)
		{
			if (ft_strcmp(args[n], args[n + 1]) > 0)
			{
				printf("n = %d>%s > %s\n", n, args[n], args[n + 1]);
				swap(args[n], args[n + 1], &unsorted);
			}
			else
				printf("n = %d>%s < %s\n", n, args[n], args[n + 1]);
		}
			
	}
	printf("test");
	n = -1;
	while (++n < arg_count)
		ft_putstr(args[n]);
	// printf("n>%s\nn+1>%s\n", args[1], args[2]);
	// swap(args[1], args[2], &unsorted);
	// printf("n>%s\nn+1>%s\n", args[1], args[2]);
}