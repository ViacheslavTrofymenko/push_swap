/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:55:13 by viacheslav        #+#    #+#             */
/*   Updated: 2025/06/15 19:15:04 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				current_index;
	int				push_price;
	int				is_above_median;
	int				is_cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void	fill_stack(t_stack **a, char **argv, int flag_argc_2);
void	free_after_split(char **argv);
void	free_stack(t_stack **stack);
void	ft_error(t_stack **a, char **argv, int flag_argc_2);
int		is_syntax_error(char *str);
int		is_duplicated(t_stack *a, int nbr);
int		is_stack_sorted(t_stack *stack);
char	**ft_split(char *str, char separator);
t_stack	*find_last_node(t_stack *head);
void	append_node(t_stack **stack, int nbr);
t_stack	*find_min_value(t_stack *stack);
t_stack	*find_cheapest(t_stack *stack);
int		stack_len(t_stack *stack);
void	handle_three(t_stack **a);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	push_swap(t_stack **a, t_stack **b);
void	init_nodes(t_stack *a, t_stack *b);
void	finish_rotation(t_stack **stack, t_stack *top_node, char stack_name);
void	handle_five(t_stack **a, t_stack **b);
void	set_current_position(t_stack *stack);

#endif
