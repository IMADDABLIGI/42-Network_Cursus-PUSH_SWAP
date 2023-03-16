/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:15:15 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/18 17:52:05 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

t_list	*ft_split(char **str)
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
				ptr = ft_lstadd_back(ptr, ft_lstnew(ft_atoi(str[i], j)));
			while (str[i][j] != ' ' && str[i][j] != '\0')
				j++;
			while (str[i][j] == ' ' && str[i][j] != '\0')
				j++;
		}
		i++;
	}
	ft_cheek_duplicate(ptr);
	return (ptr);
}
