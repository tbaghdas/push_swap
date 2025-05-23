/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:11:57 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/23 21:29:48 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_add_node(stack **stk, int value)
{
	stack	*new_node;

	if (stk == NULL)
	{
		return (0);
	}
	new_node = (stack *) malloc(sizeof(stack));
	if (new_node == NULL)
	{
		return (1);
	}
	new_node->value = value;
	if (*stk != NULL)
	{
		while (stk->next != NULL)
		{
			stk = stk->next;
		}
		stk->next = new_node;
	}
	else
	{
		*stk = new_node;
	}
	return (0);
}

void	ft_out_print(char *out_txt)
{
	write(1, out_txt, sizeof(out_txt));
}

int	ft_sizeof_stack(stack *stk)
{
	int	count;

	count = 0;
	if (stk == NULL)
	{
		return (count);
	}
	count++;
	while (stk->next != NULL)
	{
		count++;
		stk = stk->next;
	}
	return (count);
}