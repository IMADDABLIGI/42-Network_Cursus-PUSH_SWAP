/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cheek.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:07:45 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:41:23 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile.h"

static void	ft_cheek_empty(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[i] == '\0')
		ft_write_error(NULL);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			count++;
		i++;
	}
	if (count == 0)
		ft_write_error(NULL);
}

static void	ft_cheek_again(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		ft_cheek_empty(str[i]);
		j = 0;
		while (str[i][j] != '\0')
		{
			if (str[i][j] != ' ')
			{
				if (ft_atoi(str[i], j) > 2147483647
					|| ft_atoi(str[i], j) < -2147483648)
					ft_write_error(NULL);
			}
			while (str[i][j] != ' ' && str[i][j] != '\0')
			j++;
			while (str[i][j] == ' ' && str[i][j] != '\0')
			j++;
		}
		i++;
	}
}

void	ft_cheek(char **str)
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
				ft_write_error(NULL);
			if (str[i][j] == '-' || str[i][j] == '+')
			{
				if ((str[i][j - 1] >= '0' && str[i][j - 1] <= '9')
					|| !(str[i][j + 1] >= '0' && str[i][j + 1] <= '9'))
					ft_write_error(NULL);
			}
			j++;
		}
		i++;
	}
	ft_cheek_again(str);
}
