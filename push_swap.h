/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:47:20 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/18 00:03:25 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>

typedef struct stack
{
	struct stack	*next;
	int		value;
} stack;



#endif