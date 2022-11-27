/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 10:21:01 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/21 10:32:53 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(const char *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static	int	ft_wordlen(char const *s, char c)
{
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		return (len);
	}
	return (len);
}

static	char	**free_arr(char **arr, int rows)
{
	while (rows >= 0)
	{
		free(arr[rows]);
		rows--;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char		**arr;
	int			rows;
	int			cur_row;

	rows = ft_count_word(s, c);
	arr = malloc(sizeof(char *) * (rows + 1));
	if (!arr)
		return (NULL);
	cur_row = 0;
	while (cur_row < rows)
	{
		while (*s == c)
			s++;
		arr[cur_row] = malloc(sizeof(char) * ft_wordlen(s, c) + 1);
		if (!arr[cur_row])
			return (free_arr(arr, cur_row - 1));
		ft_strlcpy(arr[cur_row], s, ft_wordlen(s, c) + 1);
		s += ft_wordlen(s, c);
		cur_row++;
	}
	arr[rows] = NULL;
	return (arr);
}
