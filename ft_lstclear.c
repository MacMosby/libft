/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:21:15 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/07/06 12:36:57 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
