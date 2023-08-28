/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrodenbu <mrodenbu@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:54:23 by mrodenbu          #+#    #+#             */
/*   Updated: 2023/07/05 14:20:59 by mrodenbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_get_str_num(char const *s, char c)
{
	int		i;
	int		words;

	words = 0;
	i = 0;
	if (s[i] == 0)
		return (0);
	if (s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i - 1] != c)
			words++;
		i++;
	}
	if (s[i] == 0 && s[i - 1] != c)
		words++;
	return (words);
}

static char	*ft_set_str(int i, int start, char const *s)
{
	int		j;
	char	*str;

	str = (char *)malloc((i - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (j < i - start)
	{
		str[j] = s[start + j];
		j++;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		num;
	char	**ptr;
	int		i;
	int		start;
	int		word;

	num = ft_get_str_num(s, c);
	ptr = (char **)malloc((num + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	start = 0;
	word = 0;
	while (s[i] && num > 0)
	{
		if (s[i] == c && s[i - 1] != c && i > 0)
			ptr[word++] = ft_set_str(i, start, s);
		if (s[i] != c && s[i - 1] == c && i > 0)
			start = i;
		i++;
	}
	if (s[i] == 0 && s[i - 1] != c && num > 0)
		ptr[word] = ft_set_str(i, start, s);
	ptr[num] = NULL;
	return (ptr);
}
