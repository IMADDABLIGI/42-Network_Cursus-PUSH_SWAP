/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:08:12 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 20:09:11 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_action1_0(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a == 0 && b > 0)
	{
		while (b != 0)
		{
			ft_rotate(stack_b);
			write(1, "rb\n", 3);
			b--;
		}
	}
	else if ((b == 0) && (a > 0))
	{
		while (a != 0)
		{
			ft_rotate(stack_a);
			write(1, "ra\n", 3);
			a--;
		}
	}
	else
		return ;
}

void	ft_action1_1(t_list **stack_a, t_list **stack_b, int min, int rest)
{
	while (min != 0)
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
		write(1, "rr\n", 3);
		min--;
	}
	while (rest)
	{
		ft_rotate(stack_a);
		write(1, "ra\n", 3);
		rest--;
	}
}

void	ft_action1_2(t_list **stack_a, t_list **stack_b, int min, int rest)
{
	while (min != 0)
	{
		ft_rotate(stack_a);
		ft_rotate(stack_b);
		write(1, "rr\n", 3);
		min--;
	}
	while (rest)
	{
		ft_rotate(stack_b);
		write(1, "rb\n", 3);
		rest--;
	}
}
