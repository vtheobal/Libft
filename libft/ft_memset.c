/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:36:12 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:50:22 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*dst;

	dst = (char *)b;
	i = 0;
	while (len > 0)
	{
		dst[i] = c;
		i++;
		len--;
	}
	return (dst);
}
