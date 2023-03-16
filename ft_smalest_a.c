/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smalest_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:46:15 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 15:48:33 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static t_list	*ft_getsmall_a(t_list *head, int i, int j)
{
	if (j <= (i / 2))
	{
		while (j > 0)
		{
			ft_rotate(&head);
			write(1, "ra\n", 3);
			j--;
		}
	}
	else
	{
		j = (i + 1) - j;
		while (j > 0)
		{
			ft_reverse(&head);
			write(1, "rra\n", 4);
			j--;
		}
	}
	return (head);
}

t_list	*ft_smalest_a(t_list *head)
{
	t_list	*ptr;
	int		num;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ptr = head;
	num = ptr->content;
	ptr = ptr->next;
	while (ptr)
	{
		i++;
		if (ptr->content < num)
		{
			j = i;
			num = ptr->content;
		}
		ptr = ptr->next;
	}
	return (ft_getsmall_a(head, i, j));
}
