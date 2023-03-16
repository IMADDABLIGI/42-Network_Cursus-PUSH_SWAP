/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:15:13 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:15:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_write_error_b(t_list *head)
{
	if (head == NULL)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	else
	{
		ft_lstdel_b(&head);
		write(1, "Error\n", 6);
		exit(1);
	}
}
