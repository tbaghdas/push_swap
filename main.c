/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:32:50 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/03 22:15:28 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ft_check_args_create_stack(argc, argv, &a) == 1)
	{
		ft_out_print("Error\n", 2);
		return (1);
	}
	ft_sort_stack(&a, &b);
	ft_free_stack(&a);
	ft_free_stack(&b);
}
