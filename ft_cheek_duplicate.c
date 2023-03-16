/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheek_duplicate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:47:47 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/11 18:18:29 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static void	ft_cheeking(t_list *head, int num, t_list *delete)
{
	t_list	*ptr;

	ptr = head->next;
	while (ptr != NULL)
	{
		if (num == ptr->content)
			ft_write_error(delete);
		ptr = ptr->next;
	}
}

void	ft_cheek_duplicate(t_list *head)
{
	t_list	*ptr;
	int		cheek;

	ptr = head;
	while (ptr != NULL)
	{
		cheek = ptr->content;
		ft_cheeking(ptr, cheek, head);
		ptr = ptr->next;
	}
}
