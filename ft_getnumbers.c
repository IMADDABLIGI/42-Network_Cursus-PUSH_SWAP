/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 11:28:44 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/19 10:37:40 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static int	ft_getmaxi(int *str, int index)
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

static int	ft_getindex(int *str, int index)
{
	int	i;
	int	max;
	int	count;

	i = 1;
	count = 1;
	max = str[0];
	while (i <= index)
	{
		if (max < str[i])
		{
			max = str[i];
			count = i;
		}
		i++;
	}
	return (count);
}

int	*getnumbers(int *str, int *ntr, int index, t_list *head)
{
	int	*atr;
	int	size;
	int	i;
	int	siz;

	size = ft_getmaxi(str, index);
	i = ft_getindex(str, index);
	siz = size;
	atr = (int *)malloc(size * (sizeof(int)));
	if (!atr)
	{
		free(atr);
		return (0);
	}
	size = size - 1;
	atr[size] = i;
	size--;
	while (size >= 0)
	{
		atr[size] = ntr[i];
		i = ntr[i];
		size--;
	}
	return (ft_lis2(atr, siz, head));
}
