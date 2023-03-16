/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 10:00:07 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 17:07:40 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_write_error(t_list *head)
{
	if (head == NULL)
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	else
	{
		ft_lstdel(&head);
		write(1, "Error\n", 6);
		exit(1);
	}
}
