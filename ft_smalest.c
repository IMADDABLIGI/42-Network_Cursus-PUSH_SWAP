/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smalest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:27:22 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/19 19:17:34 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static t_list	*ft_getsmall(t_list *head, int i, int j)
{
	if (j <= (i / 2))
	{
		while (j > 0)
		{
			ft_rotate(&head);
			j--;
		}
	}
	else
	{
		j = (i + 1) - j;
		while (j > 0)
		{
			ft_reverse(&head);
			j--;
		}
	}
	return (head);
}

t_list	*ft_smalest(t_list *head)
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
	return (ft_getsmall(head, i, j));
}
