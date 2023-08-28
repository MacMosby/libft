/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:18:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/26 14:26:35 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != (char)c && i >= 0)
		i--;
	if (i < 0)
		str = NULL;
	else
		str = &s[i];
	return ((char *)str);
}
