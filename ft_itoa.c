/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 10:46:36 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/11/01 10:41:35 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_len(long int num)
{
	int		len;

	len = 0;
	if (num < 0)
		len++;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static	char	*if_zero(void)
{
	char	*ret;

	ret = ft_calloc(sizeof(char), 2);
	if (!ret)
		return (NULL);
	ret[0] = '0';
	return (ret);
}

char	*ft_itoa(int n)
{
	long int	l_nb;
	int			len;
	char		*number;

	l_nb = n;
	len = get_len(l_nb);
	if (l_nb == 0)
		return (if_zero());
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	number[len--] = '\0';
	if (l_nb < 0)
	{
		number[0] = '-';
		l_nb *= -1;
	}
	while (l_nb != 0)
	{
		number[len--] = (l_nb % 10) + '0';
		l_nb /= 10;
	}
	return (number);
}
