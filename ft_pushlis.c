/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushlis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:58:32 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 15:20:29 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static void	ft_tatto(t_list **stack_a, int *ltr, int size)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = *stack_a;
	while (i < size)
	{
		ptr = *stack_a;
		while (ptr)
		{
			if (ptr->content == ltr[i])
			{
				ptr->tatto = 1;
				break ;
			}
			ptr = ptr->next;
		}
		i++;
	}
	free(ltr);
}

static void	ft_pushingb(t_list **stack_a, t_list **stack_b, int count)
{
	int	max;

	max = ft_lstsize(*stack_a);
	if (count <= (max / 2) && count != 0)
	{	
		while (count > 0)
		{
			ft_rotate(stack_a);
			write(1, "ra\n", 3);
			count--;
		}
	}
	else if (count > (max / 2) && count != 0)
	{
		count = ((max) - count);
		while (count > 0)
		{
			ft_reverse(stack_a);
			write(1, "rra\n", 4);
			count--;
		}
	}
	ft_push(stack_b, stack_a);
	write(1, "pb\n", 3);
}

void	ft_pushlis(t_list **stack_a, t_list **stack_b, int *ltr, int size)
{
	t_list	*ptr;
	int		count;

	ft_tatto(stack_a, ltr, size);
	ptr = *stack_a;
	count = 0;
	while (ptr)
	{
		if (ptr->tatto == 0)
		{
			ft_pushingb(stack_a, stack_b, count);
			count = -1;
		}
		count++;
		ptr = ptr->next;
		if (count == 0)
			ptr = *stack_a;
	}
}
