/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:15:27 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:51:42 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (len > len_str)
		len = len_str;
	if (start >= len_str)
	{
		dst = malloc(1 * (sizeof(char)));
		dst[i] = '\0';
		return (dst);
	}
	dst = malloc((len + 1) * (sizeof(char)));
	if (!dst)
		return (NULL);
	while (i < len && start < len_str)
		dst[i++] = s[start++];
	dst[i] = '\0';
	return (dst);
}
