/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:27:07 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:42:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_rotate_b(t_list **head)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (!(*head) || ft_lstsize_b(*head) == 1)
		return ;
	ptr1 = *head;
	*head = (*head)->next;
	ptr1->next = NULL;
	ptr2 = ft_lstlast_b(*head);
	ptr2->next = ptr1;
}
