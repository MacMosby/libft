/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:46:32 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/27 14:16:17 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)&big[0]);
	while (i < len && big[i])
	{
		while (big[i + j] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if (little[j] == 0)
			return ((char *)&big[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
