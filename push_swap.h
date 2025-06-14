/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:55:13 by viacheslav        #+#    #+#             */
/*   Updated: 2025/06/14 16:38:06 by vtrofyme         ###   ########.fr       */
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
	int				final_index;
	int				push_price;
	int				is_above_median;
	int				is_cheapest;
	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void	ft_fill_stack(t_stack **a, char **argv, int flag_argc_2);
void	ft_free_after_split(char **argv);
void	ft_free_stack(t_stack **stack);
void	ft_error(t_stack **a, char **argv, int flag_argc_2);
int		ft_is_syntax_error(char *str);
int		ft_is_duplicated(t_stack *a, int nbr);
char	**ft_split(char *str, char separator);
t_stack	*find_last_node(t_stack *head);
void	append_node(t_stack **stack, int nbr);
t_stack	*find_min_value(t_stack *stack);
t_stack	*find_cheapest(t_stack *stack);
int		stack_len(t_stack *stack);
#endif
