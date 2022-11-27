/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:19 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:02:33 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_m;
	unsigned char	*src_m;

	if (dest == src || n == 0)
		return (dest);
	dest_m = (unsigned char *)dest;
	src_m = (unsigned char *)src;
	if (dest_m < src_m)
		ft_memcpy(dest_m, src_m, n);
	else
		while (n-- > 0)
			dest_m[n] = src_m[n];
	return (dest);
}

// DESCRIPTION
//        The memmove() function copies n bytes from memory area src to
//        memory area dest.  The memory areas may overlap: copying takes
//        place as though the bytes in src are first copied into a
//        temporary array that does not overlap src or dest, and the bytes
//        are then copied from the temporary array to dest.
// RETURN VALUE
//        The memmove() function returns a pointer to dest.
// [---- dst ----]
//             [---- src ---]
//In this case it's only safe to copy "front to back" 
// as copying "back to front" would destroy src near its 
// front already when copying the first byte.
// [---- src ----]
//             [---- dst ---]
//copying the first byte of src to dst already destroys
//  the content of the last bytes of src before these have 
//  been copied. Only copying "back to front" will lead to 
//  correct results.