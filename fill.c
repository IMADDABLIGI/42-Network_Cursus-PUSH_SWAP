/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 19:06:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/24 13:49:41 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	*fullofone(int size)
{
	int	*str;
	int	i;

	i = 0;
	str = (int *)malloc(size * sizeof(int));
	if (!str)
		return (0);
	while (size > 0)
	{
		str[i] = 1;
		i++;
		size--;
	}
	return (str);
}

int	*fullofzero(int size)
{
	int	*ntr;
	int	i;

	i = 0;
	ntr = (int *)malloc(size * sizeof(int));
	if (!ntr)
		return (0);
	while (size > 0)
	{
		ntr[i] = 0;
		i++;
		size--;
	}
	return (ntr);
}
