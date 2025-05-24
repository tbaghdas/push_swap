/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 21:11:57 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/24 15:30:59 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_add_node(stack **stk, int value)
{
	stack	*new_node;
	stack	*tmp;

	if (stk == NULL)
		return (1);
	new_node = (stack *) malloc(sizeof(stack));
	if (new_node == NULL)
		return (1);
	new_node->value = value;
	new_node->next = NULL;
	if (*stk != NULL)
	{
		tmp = *stk;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
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