/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:32:01 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:32:02 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_and_do(t_stack **a, t_stack **b, char *input)
{
	if (ft_strcmp(input, "sa\n") == 0)
		return (sa(a), 0);
	else if (ft_strcmp(input, "sb\n") == 0)
		return (sb(b), 0);
	else if (ft_strcmp(input, "ss\n") == 0)
		return (ss(a, b), 0);
	else if (ft_strcmp(input, "pa\n") == 0)
		return (pa(a, b), 0);
	else if (ft_strcmp(input, "pb\n") == 0)
		return (pb(a, b), 0);
	else if (ft_strcmp(input, "ra\n") == 0)
		return (ra(a), 0);
	else if (ft_strcmp(input, "rb\n") == 0)
		return (rb(b), 0);
	else if (ft_strcmp(input, "rr\n") == 0)
		return (rr(a, b), 0);
	else if (ft_strcmp(input, "rra\n") == 0)
		return (rra(a), 0);
	else if (ft_strcmp(input, "rrb\n") == 0)
		return (rrb(b), 0);
	else if (ft_strcmp(input, "rrr\n") == 0)
		return (rrr(a, b), 0);
	return (1);
}

void	get_input(t_stack **a, t_stack **b)
{
	char	*input;

	while (1)
	{
		input = get_next_line(0);
		if (!input)
			break ;
		if (check_and_do(a, b, input))
		{
			ft_out_print("Error\n", 2);
			free(input);
			input = NULL;
			ft_free_stack(a);
			ft_free_stack(b);
			exit(1);
		}
		free(input);
		input = NULL;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	if (ft_check_args_create_stack(argc, argv, &a) == 1)
	{
		ft_out_print("Error\n", 2);
		return (1);
	}
	get_input(&a, &b);
	if (ft_checker(a, b) == 0)
		ft_out_print("OK\n", 1);
	else
		ft_out_print("KO\n", 1);
	ft_free_stack(&a);
	ft_free_stack(&b);
	return (0);
}
