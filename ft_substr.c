/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:51:21 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/20 15:54:03 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	ls;

	ls = ft_strlen((char *) s);
	if (ls - start < len)
		len = ls - start;
	if (!s || ls < start)
	{
		ptr = malloc(sizeof(char) * 1);
		ptr[0] = '\0';
		return (ptr);
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
