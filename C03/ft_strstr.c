/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/01/28 09:09:53 by anonymous     #+#    #+#                 */
/*   Updated: 2026/01/28 09:09:53 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{

}

int	main(void)
{
	char *str = "Hello, world";
	char *needle =", ";
	printf("%s", strstr(str, needle));
}