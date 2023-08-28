/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:04:30 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/21 14:40:37 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int s)
{
	if (!((s > 64 && s < 91) || (s > 96 && s < 123)))
	{
		return (0);
	}
	return (1);
}

/*
int main()
{
	int result = 0;
	result = ft_isalpha("hi0");
	printf("%d", result);
	return (0);
}*/
