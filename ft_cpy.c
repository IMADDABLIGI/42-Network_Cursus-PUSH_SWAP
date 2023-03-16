/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:57 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/18 18:16:34 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

t_list	*ft_cpy(t_list *head)
{
	t_list	*cpy;

	cpy = NULL;
	while (head != NULL)
	{
		cpy = ft_lstadd_back(cpy, ft_lstnew(head->content));
		head = head->next;
	}
	return (ft_smalest(cpy));
}
