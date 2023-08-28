/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:57:30 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/28 15:02:51 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

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
