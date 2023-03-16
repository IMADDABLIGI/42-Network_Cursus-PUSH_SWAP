/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:40:09 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/18 17:55:55 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

t_list	*ft_lstadd_back(t_list *lst, t_list *new)
{
	t_list	*ptr;

	ptr = NULL;
	if (new == NULL)
		ft_write_error(lst);
	else if (lst == NULL)
		lst = new;
	else
	{
		ptr = ft_lstlast(lst);
		ptr->next = new;
	}
	return (lst);
}
