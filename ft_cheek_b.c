/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheek_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:05:23 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:35:51 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

static void	ft_cheek_empty_b(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		ft_write_error_b(NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			count++;
		i++;
	}
	if (count == 0)
		ft_write_error_b(NULL);
}

static void	ft_cheek_again_b(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		ft_cheek_empty_b(str[i]);
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] != ' ')
			{
				if (ft_atoi_b(str[i], j) > 2147483647
					|| ft_atoi_b(str[i], j) < -2147483648)
					ft_write_error_b(NULL);
			}
			while (str[i][j] != ' ' && str[i][j] != '\0')
			j++;
			while (str[i][j] == ' ' && str[i][j] != '\0')
			j++;
		}
		i++;
	}
}

void	ft_cheek_b(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			if (!((str[i][j] == ' ') || (str[i][j] >= '0' && str[i][j] <= '9')
				|| (str[i][j] == '-' || str[i][j] == '+')))
				ft_write_error_b(NULL);
			if (str[i][j] == '-' || str[i][j] == '+')
			{
				if ((str[i][j - 1] >= '0' && str[i][j - 1] <= '9')
					|| !(str[i][j + 1] >= '0' && str[i][j + 1] <= '9'))
					ft_write_error_b(NULL);
			}
			j++;
		}
		i++;
	}
	ft_cheek_again_b(str);
}
