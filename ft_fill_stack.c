/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <vtrofyme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 13:46:48 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/06/14 16:27:19 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

static int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	while ((*nptr > 8 && *nptr < 14) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		num = num * 10 + (*nptr - '0');
		nptr++;
	}
	return (sign * num);
}

void	ft_fill_stack(t_stack **a, char **argv, int flag_argc_2)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (ft_is_syntax_error(argv[i]))
			ft_error(a, argv, flag_argc_2);
		nbr = ft_atoi(argv[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
			ft_error(a, argv, flag_argc_2);
		if (ft_is_duplicated(*a, (int)nbr))
			ft_error(a, argv, flag_argc_2);
		append_node(a, (int)nbr);
		i++;
	}
	if (flag_argc_2)
		ft_free_after_split(argv);
}
