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
	size_t			i;

	i = 0;
	st = (unsigned char *)s;
	while (st[i] && (unsigned char)c != st[i] && i < n)
		i++;
	if ((i == n) || (st[i] == '\0' && (unsigned char)c != '\0' && n > 0))
		return (NULL);
	while (i--)
		st++;
	return (st);
}
