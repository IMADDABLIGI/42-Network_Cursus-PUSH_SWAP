/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error4_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:30:48 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:31:12 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

void	ft_write_error4_b(t_list *head, t_list *head2)
{
	ft_lstdel_b(&head);
	ft_lstdel_b(&head2);
	write(1, "Error\n", 6);
	exit(1);
}
