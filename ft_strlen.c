/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:49 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:03:15 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// DESCRIPTION 
//        The strlen() function calculates the length of the string pointed
//        to by s, excluding the terminating null byte ('\0').
// RETURN VALUE
//        The strlen() function returns the number of bytes in the string
//        pointed to by s.
