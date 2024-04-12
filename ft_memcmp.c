/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:49:17 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 14:37:23 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	int				r;
	unsigned char	*src1;
	unsigned char	*src2;

	if (n == 0)
		return (0);
	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	i = 0;
	r = 0;
	while (i < n && src1[i] == src2[i])
	{
		i++;
	}
	r = src1[i] - src2[i];
	if (r > 0)
		r = 1;
	else if (r < 0)
		r = -1;
	return (r);
}
