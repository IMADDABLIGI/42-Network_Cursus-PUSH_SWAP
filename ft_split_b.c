/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:08:31 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:11:04 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

t_list	*ft_split_b(char **str)
{
	t_list	*ptr;
	int		i;
	int		j;

	ptr = NULL;
	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] != ' ')
				ptr = ft_lstadd_back_b(ptr, ft_lstnew_b(ft_atoi_b(str[i], j)));
			while (str[i][j] != ' ' && str[i][j] != '\0')
				j++;
			while (str[i][j] == ' ' && str[i][j] != '\0')
				j++;
		}
		i++;
	}
	ft_cheek_duplicate_b(ptr);
	return (ptr);
}
