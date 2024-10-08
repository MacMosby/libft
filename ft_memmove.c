/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 16:51:28 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/09 23:22:51 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sors;
	size_t		i;

	dst = dest;
	sors = src;
	i = -1;
	if (dst == 0 && sors == 0)
		return (NULL);
	if (dst < sors || sors + n < dst)
	{
		while (++i < n)
		{
			dst[i] = sors[i];
		}
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = sors[n - 1];
			n--;
		}
	}
	return (dest);
}
