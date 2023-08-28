/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:37:20 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/05 16:43:51 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int s)
{
	if (!(s >= 0 && s <= 127))
	{
		return (0);
	}
	return (1);
}
/*
int main()
{
	int res = 0;
	res = ft_isascii("");
	printf("%d", res);
	return (0);
}
*/
