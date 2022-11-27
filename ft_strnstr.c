/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:59 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/18 13:38:42 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_n;

	len_n = ft_strlen(needle);
	if (len_n == 0)
		return ((char *)haystack);
	while (*haystack && len-- >= len_n)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, len_n)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

// The strnstr() function locates the
// first occurrence of the	null-terminated
// string little in the string big, where
// not more than len characters are searched.
// Characters that appear after a `\0'
// character are not searched.	Since the 
// strnstr() function isa FreeBSD specific API, it
// should only be used when portability is not a concern.

// RETURN VALUES
// If	little is an empty string, big is returned; 
// if little occurs nowhere in	big, NULL is returned; 
// otherwise a pointer to the first character of
// the first occurrence of little is returned.