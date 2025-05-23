/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:02:45 by btigran           #+#    #+#             */
/*   Updated: 2025/05/23 20:25:20 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(stack **dst, stack **src)
{
	stack *tmp;
	
	if (dst == NULL || src == NULL || *src == NULL)
	{
		return ;
	}
	if (*dst == NULL)
	{
		*dst = *src;
		tmp = *src->next;
		*src->next = NULL;
		*src = tmp;
	}
	else
	{
		tmp = *src->next;
		*src->next = *dts;
		*dst = *src;
		*src = tmp;
	}
}

void	pa(stack **a, stack **b)
{
	ft_push(a, b);
	ft_out_print("pa");
}

void	pb(stack **a, stack **b)
{
	ft_push(b, a);
	ft_out_print("pb");
}
