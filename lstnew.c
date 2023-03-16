/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 09:18:07 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/22 17:01:01 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

t_list	*ft_lstnew(int content)
{
	t_list	*nude;

	nude = malloc(sizeof(t_list));
	if (!nude)
		return (NULL);
	nude->content = content;
	nude->tatto = 0;
	nude->pos_a = 0;
	nude->pos_b = 0;
	nude->next = NULL;
	return (nude);
}
