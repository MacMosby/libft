/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:01:11 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/21 14:40:59 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int s)
{
	if (!(s > 47 && s < 58))
	{
		return (0);
	}
	return (1);
}

/*
int main()
{
	int result = 0;
	result = ft_isdigit("/");
	printf("%d", result);
	return (0);
}
*/
