/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_command.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 19:17:36 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 19:23:05 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!stack || !*stack || !(*stack)->next)
		return;
	last = find_last_node(*stack);
	before_last = last->prev;
	before_last->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}
void	rra(t_stack **a, int checker)
{
	reverse_rotate(a);
	if (!checker)
		write(1, "ra\n", 3);
}

void	rrb(t_stack **b, int checker)
{
	reverse_rotate(b);
	if (!checker)
		write(1, "rb\n", 3);
}

void	rrr(t_stack **a, t_stack **b, int checker)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (!checker)
		write(1, "rr\n", 3);
}
