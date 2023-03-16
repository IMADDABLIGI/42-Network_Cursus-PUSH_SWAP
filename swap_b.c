/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:24:19 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:24:39 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_swap_b(t_list **head)
{
	int	tmp;

	if (!(*head) || ft_lstsize_b(*head) == 1)
		return ;
	tmp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = tmp;
}
