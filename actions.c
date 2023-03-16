/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:05:37 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 11:07:13 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_action1(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b)
{
	if (pos_a == 0 || pos_b == 0)
		ft_action1_0(stack_a, stack_b, pos_a, pos_b);
	else if (pos_a > pos_b)
		ft_action1_1(stack_a, stack_b, pos_b, (pos_a - pos_b));
	else if (pos_a < pos_b)
		ft_action1_2(stack_a, stack_b, pos_a, (pos_b - pos_a));
	else
	{
		while (pos_a != 0)
		{
			ft_rotate(stack_a);
			ft_rotate(stack_b);
			write(1, "rr\n", 3);
			pos_a--;
		}
	}
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_action2(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b)
{
	while (pos_a != 0)
	{
		ft_rotate(stack_a);
		write(1, "ra\n", 3);
		pos_a--;
	}
	while (pos_b != 0)
	{
		ft_reverse(stack_b);
		write(1, "rrb\n", 4);
		pos_b++;
	}
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_action3(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b)
{
	while (pos_a < 0)
	{
		ft_reverse(stack_a);
		write(1, "rra\n", 4);
		pos_a++;
	}
	while (pos_b != 0)
	{
		ft_rotate(stack_b);
		write(1, "rb\n", 3);
		pos_b--;
	}
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}

void	ft_action4(t_list **stack_a, t_list **stack_b, int pos_a, int pos_b)
{
	int	min;
	int	rest;

	if (pos_a == pos_b)
		ft_action4_0(stack_a, stack_b, pos_a);
	else if (pos_a < pos_b)
	{
		min = pos_b;
		rest = pos_a + (pos_b * (-1));
		ft_action4_1(stack_a, stack_b, min, rest);
	}
	else if (pos_b < pos_a)
	{
		min = pos_a;
		rest = pos_b + (pos_a * (-1));
		ft_action4_2(stack_a, stack_b, min, rest);
	}
	ft_push(stack_a, stack_b);
	write(1, "pa\n", 3);
}
