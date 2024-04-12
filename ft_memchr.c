/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:42:27 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 14:21:47 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*src;
	void			*r;

	src = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c)
		{
			r = &src[i];
			return (r);
		}
		i++;
	}
	return (NULL);
}
