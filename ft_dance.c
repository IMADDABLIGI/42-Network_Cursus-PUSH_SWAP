/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:07:19 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/24 14:49:44 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static void	ft_posb(t_list *stack_b)
{
	t_list	*ptr;
	int		count;
	int		size;

	count = 0;
	size = ft_lstsize(stack_b);
	ptr = stack_b;
	while (ptr)
	{
		if (count > (size / 2))
			ptr->pos_b = ((size - count) * (-1));
		else
			ptr->pos_b = count;
		ptr = ptr->next;
		count++;
	}
}

void	ft_dance(t_list *stack_a, t_list *stack_b)
{
	t_list	*ptr;

	ft_posb(stack_b);
	ptr = stack_b;
	while (ptr)
	{
		ptr->pos_a = ft_pos(ptr->content, stack_a);
		ptr = ptr->next;
	}
}
