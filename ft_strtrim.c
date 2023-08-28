/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:18:27 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/30 14:40:34 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_find_match(char c, char const *set)
{
	int	setlen;
	int	i;

	setlen = ft_strlen(set);
	i = 0;
	while (i < setlen)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		start;
	int		size;
	char	*ptr;

	i = 0;
	while (ft_find_match(s[i], set) == 1)
		i++;
	start = i;
	while (s[i])
		i++;
	while (ft_find_match(s[i - 1], set) == 1 && i > start)
		i--;
	size = i - start;
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
