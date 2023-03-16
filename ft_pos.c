/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:17:05 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 11:10:57 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	ft_max_ab(t_list *head)
{
	t_list	*ptr;
	int		max;

	ptr = head;
	max = ptr->content;
	while (ptr)
	{
		if (ptr->content > max)
			max = ptr->content;
		ptr = ptr->next;
	}
	return (max);
}

static int	ft_cheek_max(int num, t_list *stack_a)
{
	if ((num > ft_max_ab(stack_a)))
		return (1);
	return (0);
}

static int	ft_maxs(t_list *head)
{
	t_list	*ptr;
	int		max;
	int		count;
	int		store;

	count = 0;
	ptr = head;
	max = ptr->content;
	while (ptr)
	{
		if (ptr->content >= max)
		{
			max = ptr->content;
			store = count;
		}
		ptr = ptr->next;
		count++;
	}
	store++;
	if (store > (ft_lstsize(head) / 2))
		store = (((ft_lstsize(head) - store)) * (-1));
	return (store);
}

static int	ft_fillpos_a(int num, t_list *ptr)
{
	int	count;
	int	store;

	count = 0;
	while (ptr->next)
	{
		if ((num > ptr->content) && (num < ptr->next->content))
				store = count;
		count++;
		ptr = ptr->next;
	}
	store++;
	return (store);
}

int	ft_pos(int num, t_list *stack_a)
{
	t_list	*ptr;
	int		count;
	int		store;

	count = 0;
	store = 0;
	if (ft_cheek_max(num, stack_a))
		return (ft_maxs(stack_a));
	ptr = ft_lstlast(stack_a);
	count = ptr->content;
	if ((num < stack_a->content) && (num > ptr->content))
		return (store);
	ptr = stack_a;
	store = ft_fillpos_a(num, ptr);
	if (store > (ft_lstsize(stack_a) / 2))
		store = (((ft_lstsize(stack_a) - store)) * (-1));
	return (store);
}
