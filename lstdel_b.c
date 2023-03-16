/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:18:27 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:18:59 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_lstdel_b(t_list **head)
{
	t_list	*ptr;

	ptr = *head;
	while (*head != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	return ;
}
