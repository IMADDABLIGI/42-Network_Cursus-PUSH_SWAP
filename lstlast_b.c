/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:19:52 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:20:15 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

t_list	*ft_lstlast_b(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
