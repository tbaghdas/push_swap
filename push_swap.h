/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:47:20 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/05/24 15:32:26 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <limits.h>
#include <unistd.h>

typedef struct stack
{
	struct stack	*next;
	int				value;

	//next = NULL;
} stack;



#endif