/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 20:03:17 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:50:17 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*ptr;

	d = (unsigned char *) dest;
	ptr = (unsigned char *) src;
	if ((size_t)dest + n < (size_t)src || (size_t)src >= (size_t)dest)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		d[n - 1] = ptr[n - 1];
		n--;
	}
	return (dest);
}
