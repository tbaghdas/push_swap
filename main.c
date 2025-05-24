/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:32:50 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/24 15:40:01 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	stack	*a;
	stack	*b;

	if (ft_check_args_create_stack(argc, argv, &a) == 1)
	{
		ft_out_print("Error");
		return (1);
	}
	//ft_create_stacks(argc, argv);
	ft_sort_stack(a, b);
}

