/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:12:48 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 14:19:34 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		j;
	size_t	i;
	size_t	k;
	size_t	srcsize;

	j = 0;
	srcsize = ft_strlen(src);
	i = ft_strlen(dst);
	if (dstsize == 0)
		return (srcsize);
	if (dstsize < i)
		return (srcsize + dstsize);
	k = i;
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srcsize + k);
}
