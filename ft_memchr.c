/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarneld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:58:47 by tarneld           #+#    #+#             */
/*   Updated: 2020/10/29 13:58:49 by tarneld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	int				i;

	if (n == 0)
		return (NULL);
	i = -1;
	st = (unsigned char *)s;
	while (++i < (int)n)
	{
		if ((unsigned char)c == st[i])
			return (st + i);
		if (st[i] == '\0')
			return (NULL);
	}
	return (NULL);
}
