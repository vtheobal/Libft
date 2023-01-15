/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:16:09 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:51:13 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	while (*dst && i < size)
	{
		dst++;
		i++;
	}
	dst_len = i;
	if (size != 0)
	{
		while (*src && i < size - 1)
		{
			*dst = *src;
			dst++;
			src++;
			i++;
		}
	}
	if (i < size)
		*dst = '\0';
	return (dst_len + src_len);
}
