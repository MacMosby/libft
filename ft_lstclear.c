/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:21:15 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/09 23:21:56 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*el;
	t_list	*elem;

	if (lst != 0 && lst[0] != 0)
	{
		el = lst[0];
		while (el -> next != NULL)
		{
			del(el -> content);
			elem = el;
			el = el -> next;
			free(elem);
		}
		del(el -> content);
		free(el);
		lst[0] = NULL;
	}
}
