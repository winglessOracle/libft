/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:09 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/31 10:25:56 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// DESCRIPTION
//        The memcmp() function compares the first n bytes (each
//        interpreted as unsigned char) of the memory areas s1 and s2.
// RETURN VALUE
//        The memcmp() function returns an integer less than, equal to, or
//        greater than zero if the first n bytes of s1 is found,
//        respectively, to be less than, to match, or be greater than the
//        first n bytes of s2.

//        For a nonzero return value, the sign is determined by the sign of
//        the difference between the first pair of bytes (interpreted as
//        unsigned char) that differ in s1 and s2.

//        If n is zero, the return value is zero.