/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 12:59:14 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/12 12:59:39 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*dest;
	size_t	i;

	count = ft_strlen(s1);
	dest = (char *)malloc(count + 1);
	if (dest)
	{
		i = 0;
		while (i < count + 1)
		{
			dest[i] = s1[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
		return (NULL);
	return (dest);
}
