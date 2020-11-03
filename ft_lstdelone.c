/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarneld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:21:56 by tarneld           #+#    #+#             */
/*   Updated: 2020/11/03 13:21:58 by tarneld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list *temp;

	temp = lst;
	while (temp)
	{
		(*del)(temp->content);
		temp = temp->next;
	}
}
