/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:29:38 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/13 13:11:00 by pi               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int	i;
	size_t	ssize;

	subs = (char *) malloc(len + 1);
	if (subs)
	{
		i = 0;
		subs[i] = '\0';
		if (s[i] == '\0')
			return (subs);
		if (start > ft_strlen(s))
			return (subs);
        	while (s[i] != '\0')
        	{   
            		if(i == start)
                		ssize = ft_strlcpy(subs, &s[i], len + 1);
            		i++;
        	}
    	}
    	else
        	return (NULL);
    	return (subs);
}
