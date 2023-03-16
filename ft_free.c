/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 10:17:24 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/19 10:56:35 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

void	ft_free(t_list *tmp, int *str, int *ntr)
{
	ft_lstdel(&tmp);
	free(str);
	free(ntr);
	return ;
}
