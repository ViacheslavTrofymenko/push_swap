/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:18:16 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 19:46:01 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

static t_stack	*find_max_value(t_stack *stack)
{
	t_stack	*node_with_max;

	if (!stack)
		return (NULL);
	node_with_max = stack;
	while (stack)
	{
		if (stack->value > node_with_max->value)
			node_with_max = stack;
		stack = stack->next;
	}
	return (node_with_max);
}

void	handle_three(t_stack **a)
{
	t_stack	*node_with_max;

	if (!a || !*a)
		return ;
	node_with_max = find_max_value(*a);
	if (node_with_max == *a)
		ra(a);
	if (node_with_max == (*a)->next)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
void	handle_five(t_stack **a, t_stack **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		finish_rotation(a, find_min_value(*a), 'a');
		pb(b, a);
	}
}
