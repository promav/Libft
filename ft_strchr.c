/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:12:31 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 11:31:08 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;
	char	*str;

	str = (char *) s;
	ch = (char) c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
