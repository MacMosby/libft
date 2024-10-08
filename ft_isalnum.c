/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:18:22 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/05 16:29:13 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int s)
{
	if (!((s > 47 && s < 58)
			|| (s > 64 && s < 91)
			|| (s > 96 && s < 123)))
	{
		return (0);
	}
	return (1);
}
