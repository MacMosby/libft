/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:45:50 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/07/03 12:06:57 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(long int n)
{
	int	size;
	int	i;

	size = 1;
	i = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	ft_set_str(char *ptr, long int num, int i, int size)
{
	if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
	}
	if (num > 9)
	{
		ft_set_str(ptr, (num / 10), i + 1, size);
		ptr [size - 1 - i] = (char)((num % 10) + 48);
	}
	if (num < 10)
		ptr[size - 1 - i] = (char)(num + 48);
}

char	*ft_itoa(int n)
{
	int			size;
	long int	num;
	char		*ptr;
	int			i;

	i = 0;
	num = n;
	size = ft_get_size(num);
	ptr = (char *)malloc((size + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_set_str(ptr, num, i, size);
	ptr[size] = 0;
	return (ptr);
}
