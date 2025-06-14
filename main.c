/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:59:35 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 17:12:32 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, 0);
		else if (stack_len(a) == 3)
			ft_sort_three(&a);
		else
			ft_push_swap(&a, &b);
	}
	free_stack(&a);
	return (0);
}
