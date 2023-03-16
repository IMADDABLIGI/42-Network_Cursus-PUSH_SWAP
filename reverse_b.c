/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:27:59 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 14:18:11 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_reverse_b(t_list **head)
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*head) || ft_lstsize_b(*head) == 1)
		return ;
	ptr = *head;
	while (ptr->next->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr3 = ptr->next;
	ptr2 = ptr;
	ptr2->next = NULL;
	ptr3->next = *head;
	*head = ptr3;
}
