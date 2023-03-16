/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 20:01:43 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/26 20:04:22 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_write_error4(t_list *head, t_list *head2)
{
	ft_lstdel(&head);
	ft_lstdel(&head2);
	write(1, "Error\n", 6);
	exit(1);
}
