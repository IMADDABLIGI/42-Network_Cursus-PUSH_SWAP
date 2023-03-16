/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idabligi <idabligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 17:50:16 by idabligi          #+#    #+#             */
/*   Updated: 2023/01/27 11:32:43 by idabligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headerfile_b.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*save;

	if (ac == 1)
		exit (0);
	ft_cheek_b(av);
	stack_a = ft_split_b(av);
	stack_b = NULL;
	save = get_next_line(0);
	while (save)
	{
		ft_execute(save, &stack_a, &stack_b);
		save = get_next_line(0);
	}
	if (!stack_b && ft_final_cheek(stack_a))
		write(1, "ok\n", 3);
	else
		write(1, "ko\n", 3);
	ft_lstdel_b(&stack_a);
	ft_lstdel_b(&stack_b);
}
