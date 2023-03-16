/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:46:22 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/18 20:01:50 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static int	ft_getmaximum(int *str, int index)
{
	int	i;
	int	max;

	i = 1;
	max = str[0];
	while (i <= index)
	{
		if (max < str[i])
		max = str[i];
		i++;
	}
	return (max);
}

int	ft_getmax(t_list *head, t_list *atr, int *str)
{
	t_list	*ptr;
	int		i;
	int		j;

	i = 1;
	ptr = head;
	while (ptr->next)
	{
		ptr = head;
		j = 0;
		while (j != i)
		{
			if (ptr->content < atr->content && (str[j] + 1) >= str[i])
			{
				str[i] = (str[j] + 1);
			}
			ptr = ptr->next;
			j++;
		}
		atr = atr->next;
		i++;
	}
	return (ft_getmaximum(str, (i - 1)));
}
