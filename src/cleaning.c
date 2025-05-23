/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btigran <btigran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:42:02 by btigran           #+#    #+#             */
/*   Updated: 2025/05/22 19:56:26 by btigran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free(char **words)
{
	int	i;

	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
	}
	free(words);
}

void	ft_free_stack(stack **stk)
{
	stack	*tmp;

	if (stk == NULL)
	{
		return ;
	}
	while (*stk != NULL)
	{
		tmp = stk->next;
		free(*stk);
		*stk = tmp;
	}
}
