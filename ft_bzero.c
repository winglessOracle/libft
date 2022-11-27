/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:26:21 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:01:36 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*put_c;
	size_t			i;

	put_c = (unsigned char *)s;
	i = 0;
	while (i++ < n)
		*put_c++ = '\0';
}

// DESCRIPTION         top
//        The bzero() function erases the data in the n bytes of the memory
//        starting at the location pointed to by s, by writing zeros (bytes
//        containing '\0') to that area.

//        The explicit_bzero() function performs the same task as bzero().
//        It differs from bzero() in that it guarantees that compiler
//        optimizations will not remove the erase operation if the compiler
//        deduces that the operation is "unnecessary".
// RETURN VALUE         top
//        None.