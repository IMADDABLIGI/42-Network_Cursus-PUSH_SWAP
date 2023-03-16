/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:15:07 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/23 20:46:19 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_push(t_list **receive, t_list **sent)
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
