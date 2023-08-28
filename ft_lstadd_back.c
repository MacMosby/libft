/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:54:50 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/07/06 12:20:35 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int		i;
	t_list	*el;

	i = 0;
	if (lst[0] == NULL)
		lst[0] = new;
	else
	{
		el = lst[0];
		while (el -> next != NULL)
		{
			el = el -> next;
		}
		el -> next = new;
	}
}
