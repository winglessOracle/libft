/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: cwesseli <cwesseli@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/20 09:55:29 by cwesseli      #+#    #+#                 */
/*   Updated: 2022/10/20 12:46:09 by cwesseli      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*remove;

	if (!del || !lst)
		return ;
	remove = NULL;
	temp = *lst;
	while (temp)
	{
		del(temp->content);
		remove = temp;
		temp = temp->next;
		free (remove);
	}
	*lst = NULL;
	return ;
}
