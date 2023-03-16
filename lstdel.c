/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 18:03:42 by idabligi          #+#    #+#             */
/*   Updated: 2022/12/28 19:27:37 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_lstdel(t_list **head)
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
