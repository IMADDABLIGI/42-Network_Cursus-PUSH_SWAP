/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 11:11:40 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 21:33:43 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_swap(t_list **head)
{
	int	tmp;

	if (!(*head) || ft_lstsize(*head) == 1)
		return ;
	tmp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = tmp;
}
