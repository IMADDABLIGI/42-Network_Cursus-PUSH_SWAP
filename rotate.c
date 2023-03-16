/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:24:23 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 21:33:07 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_rotate(t_list **head)
{
	t_list	*ptr1;
	t_list	*ptr2;

	if (!(*head) || ft_lstsize(*head) == 1)
		return ;
	ptr1 = *head;
	*head = (*head)->next;
	ptr1->next = NULL;
	ptr2 = ft_lstlast(*head);
	ptr2->next = ptr1;
}
