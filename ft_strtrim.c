/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 09:48:20 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/18 13:39:21 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int		start;
	unsigned int		end;
	unsigned int		len_ret;
	char				*ret;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set || *set == '\0' || *s1 == '\0')
		return (ft_strdup((char *)s1));
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strchr(set, s1[end - 1]) && s1[end - 1] && end > start)
		end--;
	len_ret = end - start;
	ret = (ft_substr(s1, start, len_ret));
	return (ret);
}
