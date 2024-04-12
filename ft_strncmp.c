/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabromer <pabromer@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 11:32:31 by pabromer          #+#    #+#             */
/*   Updated: 2024/04/09 12:43:30 by pabromer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	int	r;

	i = 0;
	while (s1[i] != '\0' && i < n - 1 && s1[i] == s2[i])
		i++;
	r = s1[i] - s2[i];
	if (r == 0)
		r = 0;
	else if (r < 0)
		r = -1;
	else
		r = 1;
	return (r);
}
