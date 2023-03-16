/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:30:36 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 12:18:32 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_small_swap(t_list **stack_a)
{
	t_list	*ptr;
	int		low;

	ptr = *stack_a;
	ptr = ft_smalest_a(ptr);
	low = ptr->next->content;
	if (ft_lstsize(ptr) == 2)
		exit(0);
	else if ((ptr->content < low) && (low < ptr->next->next->content))
	{
		ft_lstdel(stack_a);
		exit (0);
	}
	else
	{
		ft_reverse(stack_a);
		write (1, "rra\n", 4);
		ft_swap(stack_a);
		write (1, "sa\n", 3);
		ft_lstdel(stack_a);
		exit (0);
	}
}
