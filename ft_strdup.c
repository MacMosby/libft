/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:57:30 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/09 23:24:30 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*ptr;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	len++;
	ptr = (char *)malloc(len * sizeof(char));
	if (ptr)
	{
		while (i < len)
		{
			ptr[i] = s[i];
			i++;
		}
		return (ptr);
	}
	else
		return (NULL);
}
