/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 17:18:16 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 18:09:03 by vtrofyme         ###   ########.fr       */
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
