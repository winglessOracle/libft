/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:21:37 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/18 13:35:37 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret_str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	ret_str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ret_str)
		return (NULL);
	while (s[i])
	{
		ret_str[i] = f(i, s[i]);
		i++;
	}
	ret_str[i] = '\0';
	return (ret_str);
}
