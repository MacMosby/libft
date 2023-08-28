/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 18:29:38 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/23 18:32:03 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c += 32;
	}
	return (c);
}