/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 09:27:39 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/14 13:03:05 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	dst_i;
	size_t	src_i;
	size_t	max_append;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	dst_i = len_dst;
	src_i = 0;
	max_append = dstsize - len_dst - 1;
	if (dstsize == 0 || dstsize <= len_dst)
		return (len_src + dstsize);
	while (src_i < max_append && src[src_i])
		dst[dst_i++] = src[src_i++];
	dst[dst_i] = 0;
	return (len_dst + len_src);
}

// DESCRIPTION
// // strlcat() appends string src to the end of dst. 
// It will append at most dstsize - strlen(dst) - 1 characters.
// It will then NUL-terminate, unless dstsize is 0 or the original
// dst string was longer than dstsize (in practice this should not
// happen as it means that either dstsize is incorrect or that dst
// is not a proper string).
// If the src and dst strings overlap, the behavior is undefined.
// RETURN VALUE
// 	strlcat() functions return the total length of the string they 
// tried to create. That means the initial length of dst plus the 
// length of src.