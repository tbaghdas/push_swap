/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaghdas <tbaghdas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:47:20 by tbaghdas          #+#    #+#             */
/*   Updated: 2025/07/12 14:44:37 by tbaghdas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
// #include <unistd.h>
// # include <stdlib.h>
# include "libft/libft.h"

typedef struct stack
{
	struct stack	*next;
	int				value;
	int				index;

}	t_stack;

void	indexing(t_stack **stk);
int		max_pos(t_stack **stk);
int		set_block_size(int nb);
int		get_min_pos(t_stack *a);
void	min_to_top(t_stack **a);
void	sort_2(t_stack **a);
void	sort_3(t_stack **a);
void	sort_4(t_stack **a, t_stack **b);
void	sort_5(t_stack **a, t_stack **b);
void	push_to_b(t_stack **a, t_stack **b);
void	push_to_a(t_stack **a, t_stack **b);
void	ft_sort_stack(t_stack **a, t_stack **b);
int		ft_check_args_create_stack(int argc, char **argv, t_stack **a);
int		ft_check_word(char *word, t_stack **a);
int		ft_is_int(char *word, t_stack **a);
int		ft_check_char(char *word);
int		ft_check_unique(t_stack *a, int value);
void	ft_free(char **words);
void	ft_free_stack(t_stack **stk);
void	ft_push(t_stack **dst, t_stack **src);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ft_reverse_rotate(t_stack **stk);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	ft_rotate(t_stack **stk);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	ft_swap(t_stack **stk);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
int		ft_add_node(t_stack **stk, int value);
void	ft_out_print(char *out_txt, int fd);
int		ft_sizeof_stack(t_stack *stk);
int		ft_checker(t_stack *a, t_stack *b);

#endif