/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:06:01 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/07/03 12:13:24 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_get_size(char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	return (i + j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	int		size;
	char	*ptr;

	size = ft_get_size(s1, s2);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	i = 0;
	j = 0;
	if (ptr)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			ptr[i + j] = s2[j];
			j++;
		}
		ptr[i + j] = 0;
		return (ptr);
	}
	return (NULL);
}
