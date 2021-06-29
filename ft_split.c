/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarneld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 12:44:24 by tarneld           #+#    #+#             */
/*   Updated: 2020/10/30 12:45:12 by tarneld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		r_size(const char *s, char c)
{
	size_t len;

	len = 0;
	while (*s)
	{
		if (*s == c)
			++s;
		else
		{
			++len;
			while (*s && *s != c)
				++s;
		}
	}
	return (len);
}

static int		size_str(const char *str, int *nul, char c)
{
	size_t n;

	n = 0;
	while (str[*nul] == c)
		*nul = *nul + 1;
	while (str[*nul] != c)
	{
		n++;
		*nul += 1;
	}
	return (n);
}

static char		**free_strs(char **r, int j)
{
	while (--j)
		free(r[j]);
	free(r);
	return (NULL);
}

char			**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**r;
	size_t	w_len;

	i = 0;
	j = 0;
	w_len = 0;
	if (!s)
		return (NULL);
	if (!(r = (char **)malloc(sizeof(char*) * (r_size(s, c) + 1))))
		return (0);
	while (s[i] && j < r_size(s, c))
	{
		w_len = size_str(s, &i, c);
		if (!(r[j] = (char *)malloc(sizeof(char) * (w_len + 1))))
			return (free_strs(r, j));
		k = 0;
		while (w_len)
			r[j][k++] = s[i - w_len--];
		r[j++][k] = '\0';
	}
	r[j] = NULL;
	return (r);
}
