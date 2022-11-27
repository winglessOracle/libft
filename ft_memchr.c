/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:01 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:05:54 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	look_for;
	unsigned char	*look_here;
	size_t			i;

	look_for = (unsigned char)c;
	look_here = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (look_here[i] == look_for)
			return (&look_here[i]);
		i++;
	}
	return (0);
}

//  DESCRIPTION
//        The memchr() function scans the initial n bytes of the memory
//        area pointed to by s for the first instance of c.  Both c and the
//        bytes of the memory area pointed to by s are interpreted as
//        unsigned char.

// RETURN VALUE
//        The memchr() and memrchr() functions return a pointer to the
//        matching byte or NULL if the character does not occur in the
//        given memory area.