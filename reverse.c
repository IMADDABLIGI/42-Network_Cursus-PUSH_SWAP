/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 18:05:25 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 21:17:42 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_reverse(t_list **head)
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*ptr3;

	if (!(*head) || ft_lstsize(*head) == 1)
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
