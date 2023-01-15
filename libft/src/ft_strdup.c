/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:19:25 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:51:03 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dst;
	size_t	len;

	len = ft_strlen(s) + 1;
	dst = malloc (len * sizeof(char));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s, len);
	return (dst);
}
