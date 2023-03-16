/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 18:59:14 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/25 15:49:02 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_write_error2(t_list *head, t_list *head2, int *str, int *ntr)
{
	ft_lstdel(&head);
	ft_lstdel(&head2);
	free(str);
	free(ntr);
	write(1, "Error\n", 6);
	exit(1);
}
