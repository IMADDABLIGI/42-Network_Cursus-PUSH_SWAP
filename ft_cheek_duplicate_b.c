/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheek_duplicate_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:22:46 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:23:50 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

static void	ft_cheeking_b(t_list *head, int num, t_list *delete)
{
	t_list	*ptr;

	ptr = head->next;
	while (ptr != NULL)
	{
		if (num == ptr->content)
			ft_write_error_b(delete);
		ptr = ptr->next;
	}
}

void	ft_cheek_duplicate_b(t_list *head)
{
	t_list	*ptr;
	int		cheek;

	ptr = head;
	while (ptr != NULL)
	{
		cheek = ptr->content;
		ft_cheeking_b(ptr, cheek, head);
		ptr = ptr->next;
	}
}
