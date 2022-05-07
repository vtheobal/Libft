/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 18:13:04 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:50:51 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_mal_free (char **mass)
{
	int	i;

	i = 0;
	while (mass[i])
	{
		free (mass[i]);
		i++;
	}
	free (mass);
	return (NULL);
}

int	ft_count_words (char *str, char c)
{
	int	i;
	int	flag;
	int	count;

	flag = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && flag == 1)
		{
			flag = 0;
			count++;
		}
		while (str[i] == c && flag == 0)
			flag = 1;
		i++;
	}
	return (count);
}

int	ft_num_let(char *s, char c)
{
	int	i;
	int	perem;

	perem = 0;
	i = 0;
	while (s[i] == c && s)
		i++;
	while (s[i] != c && s)
	{
		perem++;
		i++;
		if (s[i] == c || s[i] == '\0')
			return (perem);
	}
	return (0);
}

int	ft_num_i(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c && s)
		i++;
	while (s[i] != c && s)
	{
		i++;
		if (s[i] == c || s[i] == '\0')
			return (i);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		count_words;
	char	**split;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	count_words = ft_count_words((char *)s, c);
	split = (char **)malloc((sizeof (char *)) * (count_words + 1));
	if (split == NULL)
		return (NULL);
	while (i < count_words)
	{
		split[i] = ft_substr(s, (ft_num_i((char *)s, c) - \
		ft_num_let((char *)s, c)), ft_num_let((char *)s, c));
		if (split[i] == NULL)
			return (ft_mal_free(split));
		i++;
		s += ft_num_i((char *)s, c);
	}
	split[i] = NULL;
	return (split);
}
