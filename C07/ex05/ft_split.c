/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/02/11 09:12:03 by anonymous     #+#    #+#                 */
/*   Updated: 2026/02/11 09:12:03 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define INDEX 0
#define LENGTH 1

int		check_charset(char *s1, char *s2)
{
	int		n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
		n++;
	if (s1[n] == s2[n])
		return (n);
	else
		return (0);
}



int		**allocate_substrings(char *str, char *charset, char **strings)
{
	int		n;
	int		substrings[9999][2];
	int		**pointer;
	int		count_substrings;

	pointer = substrings;
	n = -1;
	count_substrings = 0;
	while (str[++n])
	{
		if (str[n] == charset[0] && check_charset(str + n, charset))
		{
				substrings[count_substrings][INDEX] = n;
				substrings[count_substrings++][LENGTH] = check_charset(str + n, charset);
		}
	}
	substrings[count_substrings][LENGTH] = 0;
	n = -1;
	strings = malloc(sizeof(char **) * count_substrings);
	while (substrings[++n][LENGTH] != 0)
		strings[n] = malloc(sizeof(char *) * substrings[n][LENGTH]);
	return (pointer);
}



// char **ft_split(char *str, char *charset)
// {
// 	char	**strings;


// }

int		main(void)
{
	int		buf[9999][2];

	int		**substrings = buf;

	substrings = ft_checkcharset("helo hhello world", "l");
	prinf("[%d][%d]", substrings[0][INDEX], substrings[0][LENGTH]);
}