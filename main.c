/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:59:35 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/15 19:13:08 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	apply_sorting_strategy(t_stack *a, t_stack *b)
{
	if (stack_len(a) == 2)
		sa(&a);
	else if (stack_len(a) == 3)
		handle_three(&a);
	else
		push_swap(&a, &b);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		flag_argc_2;

	a = NULL;
	b = NULL;
	flag_argc_2 = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		flag_argc_2 = 1;
	}
	fill_stack(&a, argv, flag_argc_2);
	if (!is_stack_sorted(a))
		apply_sorting_strategy(a, b);
	free_stack(&a);
	return (0);
}
