/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodenbusch <marcrodenbusch@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:18:12 by mrodenbu          #+#    #+#             */
/*   Updated: 2024/09/09 23:28:32 by marcrodenbu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
