/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtheobal <vtheobal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:29:28 by vtheobal          #+#    #+#             */
/*   Updated: 2021/05/05 15:51:31 by vtheobal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	unsigned long	i;
	unsigned long	j;

	i = 0;
	j = 0;
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[j + i] == str2[j] && (j + i) < len)
		{
			j++;
			if (str2[j] == '\0')
				return ((char *)&str1[i]);
		}
		i++;
	}
	return (NULL);
}
