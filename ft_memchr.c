/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:39:21 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/09 23:22:26 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;
	const char	*res;

	i = 0;
	str = s;
	while (i < n && (unsigned char)str[i] != (unsigned char)c)
	{
		i++;
	}
	if (i == n)
		res = NULL;
	else
		res = &str[i];
	return ((void *)res);
}
