/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actionsss.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:59:01 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 17:48:13 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_action4_0(t_list **stack_a, t_list **stack_b, int pos_a)
{
	while (pos_a)
	{	
		ft_reverse(stack_a);
		ft_reverse(stack_b);
		write(1, "rrr\n", 4);
		pos_a++;
	}
}

void	ft_action4_1(t_list **stack_a, t_list **stack_b, int min, int rest)
{
	while (min)
	{
		ft_reverse(stack_a);
		ft_reverse(stack_b);
		write(1, "rrr\n", 4);
		min++;
	}
	while (rest)
	{
		ft_reverse(stack_a);
		write(1, "rra\n", 4);
		rest++;
	}	
}

void	ft_action4_2(t_list **stack_a, t_list **stack_b, int min, int rest)
{
	while (min)
	{
		ft_reverse(stack_a);
		ft_reverse(stack_b);
		write(1, "rrr\n", 4);
		min++;
	}
	while (rest)
	{
		ft_reverse(stack_b);
		write(1, "rrb\n", 4);
		rest++;
	}
}
