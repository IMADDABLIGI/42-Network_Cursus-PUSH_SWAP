/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:57:57 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:38:55 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

static void	ft_ext(int s, t_list **stack_a, t_list **stack_b)
{
	if (s == 1)
	{
		ft_swap_b(stack_a);
		ft_swap_b(stack_b);
	}
	else if (s == 2)
	{
		ft_rotate_b(stack_a);
		ft_rotate_b(stack_b);
	}
	else if (s == 3)
	{
		ft_reverse_b(stack_a);
		ft_reverse_b(stack_b);
	}
}

void	ft_execute(char *save, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(save, "sa\n") == 0)
		ft_swap_b(stack_a);
	else if (ft_strcmp(save, "sb\n") == 0)
		ft_swap_b(stack_b);
	else if (ft_strcmp(save, "ss\n") == 0)
		ft_ext(1, stack_a, stack_b);
	else if (ft_strcmp(save, "pa\n") == 0)
		ft_push_b(stack_a, stack_b);
	else if (ft_strcmp(save, "pb\n") == 0)
		ft_push_b(stack_b, stack_a);
	else if (ft_strcmp(save, "ra\n") == 0)
		ft_rotate_b(stack_a);
	else if (ft_strcmp(save, "rb\n") == 0)
		ft_rotate_b(stack_b);
	else if (ft_strcmp(save, "rr\n") == 0)
		ft_ext(2, stack_a, stack_b);
	else if (ft_strcmp(save, "rra\n") == 0)
		ft_reverse_b(stack_a);
	else if (ft_strcmp(save, "rrb\n") == 0)
		ft_reverse_b(stack_b);
	else if (ft_strcmp(save, "rrr\n") == 0)
		ft_ext(3, stack_a, stack_b);
	else
		ft_write_error4_b(*stack_a, *stack_b);
}
