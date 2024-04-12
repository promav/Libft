/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:57:51 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 10:51:10 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;
	int				i;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
