/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_error3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:04:08 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/19 10:20:54 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_write_error3(t_list *head, t_list *head2, int *str, int *ntr)
{
	ft_lstdel(&head);
	ft_lstdel(&head2);
	free(str);
	free(ntr);
	write(1, "Error\n", 6);
	exit(1);
}
