/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstnew_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:20:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:21:10 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

t_list	*ft_lstnew_b(int content)
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
