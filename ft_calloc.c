/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:08:16 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/10 23:29:51 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	else
	{
		while (i < nmemb * size)
		{
			ptr[i] = 0;
			i++;
		}
		return ((void *)ptr);
	}
}
