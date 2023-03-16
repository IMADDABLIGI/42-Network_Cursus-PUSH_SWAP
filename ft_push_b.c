/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:26:01 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:26:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_push_b(t_list **receive, t_list **sent)
{
	t_list	*ptr;

	if (*sent == NULL)
		return ;
	else if (*receive == NULL)
	{
		ptr = *sent;
		*sent = (*sent)->next;
		ptr->next = NULL;
		*receive = ptr;
		return ;
	}
	else
	{
		ptr = *sent;
		*sent = (*sent)->next;
		ptr->next = *receive;
		*receive = ptr;
		return ;
	}
}
