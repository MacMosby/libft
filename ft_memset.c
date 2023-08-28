/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:25:43 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/06/21 14:44:14 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}
/*
int main()
{
	char str[] = "hello";
	ft_memset(str, 40, 3);
	int i = 0;
	while (i < 5)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
