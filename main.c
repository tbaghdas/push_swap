/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:32:50 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/16 20:49:38 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    stack a;
    stack b;

    ft_check_args(argc, argv);
    ft_create_stacks(argc, argv);
    ft_sort_stack(a, b);
}