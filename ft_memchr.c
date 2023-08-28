/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:39:21 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/26 15:54:51 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
