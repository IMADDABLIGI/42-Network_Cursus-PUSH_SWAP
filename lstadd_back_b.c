/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:13:57 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:14:31 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

t_list	*ft_lstadd_back_b(t_list *lst, t_list *new)
{
	t_list	*ptr;

	ptr = NULL;
	if (new == NULL)
		ft_write_error_b(lst);
	else if (lst == NULL)
		lst = new;
	else
	{
		ptr = ft_lstlast_b(lst);
		ptr->next = new;
	}
	return (lst);
}
