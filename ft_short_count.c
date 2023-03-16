/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_short_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:44:13 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 15:48:05 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

int	ft_countbest(int a, int b)
{
	int	count;

	count = 0;
	if (a > b)
	{
		count = (a - b) + b;
	}
	else if (a < b)
	{
		count = (b - a) + a;
	}
	else if (a == b)
		count = a;
	return (count);
}

int	ft_countbests(int a, int b)
{
	int	count;

	count = 0;
	if (a > b)
	{
		count = b + (a - b);
	}
	else if (b > a)
	{
		count = a + (b - a);
	}
	else if (a == b)
		count = a;
	return (count);
}
