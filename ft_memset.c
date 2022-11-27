/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:23 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:02:37 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*put_c;

	i = 0;
	put_c = (unsigned char *)s;
	while (i < n)
		put_c[i++] = (unsigned char)c;
	return (s);
}

// DESCRIPTION
//        The memset() function fills the first n bytes of the memory area
//        pointed to by s with the constant byte c.
// RETURN VALUE
//        The memset() function returns a pointer to the memory area s.