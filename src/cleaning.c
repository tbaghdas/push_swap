/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaning.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 14:42:02 by btigran           #+#    #+#             */
/*   Updated: 2025/05/24 15:38:28 by tbaghdas         ###   ########.fr       */
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
		tmp = (*stk)->next;
		free(*stk);
		*stk = tmp;
	}
}
