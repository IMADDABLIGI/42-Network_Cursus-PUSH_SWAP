/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:03:40 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/19 10:39:54 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	*ft_lis2(int *ltr, int size, t_list *head)
{
	int		i;
	int		j;
	t_list	*ptr;

	i = 0;
	j = 0;
	ptr = head;
	while (i < size)
	{
		while (ptr)
		{
			if (j == ltr[i])
			{
				ltr[i] = ptr->content;
				ptr = ptr->next;
				j++;
				break ;
			}
			ptr = ptr->next;
			j++;
		}
		i++;
	}
	return (ltr);
}
