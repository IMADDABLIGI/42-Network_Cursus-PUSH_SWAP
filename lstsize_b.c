/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:29:23 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:29:46 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

int	ft_lstsize_b(t_list *lst)
{
	t_list	*ptr;
	int		count;

	count = 0;
	ptr = lst;
	if (!ptr)
		return (0);
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
