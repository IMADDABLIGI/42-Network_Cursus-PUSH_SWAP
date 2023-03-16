/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastdance.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:15:34 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 10:52:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static int	ft_callcount(int pos_a, int pos_b)
{
	int	count;

	count = 0;
	if (pos_a >= 0 && pos_b >= 0)
		count = ft_countbest(pos_a, pos_b);
	else if (pos_a >= 0 && pos_b < 0)
		count = pos_a + (pos_b * (-1));
	else if (pos_a < 0 && pos_b >= 0)
		count = (pos_a * (-1)) + (pos_b);
	else if (pos_a < 0 && pos_b < 0)
		count = ft_countbests((pos_a * (-1)), (pos_b * (-1)));
	return (count);
}

static void	ft_cleanpush(t_list **stack_a, t_list **stack_b, int a, int b)
{
	if (a >= 0 && b >= 0)
		ft_action1(stack_a, stack_b, a, b);
	else if (a >= 0 && b < 0)
		ft_action2(stack_a, stack_b, a, b);
	else if (a < 0 && b >= 0)
		ft_action3(stack_a, stack_b, a, b);
	else if (a < 0 && b < 0)
		ft_action4(stack_a, stack_b, (a), (b));
}

static void	ft_dance_stacks(t_list **stack_a, t_list **stack_b)
{
	t_list	*atr;
	int		a;
	int		b;
	int		count;

	ft_dance(*stack_a, *stack_b);
	a = (*stack_b)->pos_a;
	b = (*stack_b)->pos_b;
	count = ft_callcount(a, b);
	atr = *stack_b;
	while (atr)
	{
		if (ft_callcount(atr->pos_a, atr->pos_b) < count)
		{
			a = atr->pos_a;
			b = atr->pos_b;
			count = ft_callcount(atr->pos_a, atr->pos_b);
		}
		atr = atr->next;
	}
	ft_cleanpush(stack_a, stack_b, a, b);
}

void	ft_dancing(t_list **stack_a, t_list **stack_b)
{
	t_list	*atr;

	atr = *stack_b;
	while (atr)
	{
		ft_dance_stacks(stack_a, stack_b);
		atr = *stack_b;
	}
	*stack_a = ft_smalest_a(*stack_a);
	ft_lstdel(stack_a);
}
