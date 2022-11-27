/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:15 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/18 13:24:20 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*c_dst;
	const char		*c_src;
	size_t			i;

	c_dst = (char *)dest;
	c_src = (const char *)src;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		c_dst[i] = c_src[i];
		i++;
	}
	return (c_dst);
}

// DESCRIPTION
//        The memcpy() function copies n bytes from memory area src to
//        memory area dest.  The memory areas must not overlap.  Use
//        memmove(3) if the memory areas do overlap.
// RETURN VALUE 
//        The memcpy() function returns a pointer to dest.