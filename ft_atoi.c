/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:16:55 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/27 17:41:52 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	minus;

	i = 0;
	res = 0;
	minus = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
		i++;
	if (nptr[i] == 45)
	{
		minus = 1;
		i++;
	}
	else if (nptr[i] == 43)
		i++;
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		res *= 10;
		res += (int)nptr[i] - 48;
		i++;
	}
	if (minus % 2 == 1)
		res *= (-1);
	return (res);
}
