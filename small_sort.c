/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:58:10 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:40:02 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		find_pos_by_index(t_stack *a, int target);
void	rotate_to_pos(t_stack *a, int pos);

void	sort_two(t_stack *stack)
{
	if (!stack || stack->size < 2 || !stack->top || !stack->top->next)
		return ;
	if (stack->top->value > stack->top->next->value)
		sa(stack);
}


void	sort_small(t_stack *stack, t_stack *b)
{
	if (!stack)
		return ;
	if (stack->size == 2)
		sort_two(stack);
	else if (stack->size == 3)
		sort_three(stack);
	else if (stack->size == 4 || stack->size == 5)
		sort_four_five(stack, b);
}

void	sort_small_stack(t_stack *stack, t_stack *b)
{
	if (!stack)
		return ;
	if (stack->size <= 5)
		sort_small(stack, b);
}

void	sort_four_five(t_stack *a, t_stack *b)
{
	int	orig;
	int	limit;

	if (!a || !b)
		return ;
	orig = a->size;
	if (orig != 4 && orig != 5)
		return ;
	limit = orig - 3;
	if (!push_lowest(a, b, limit))
		return ;
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}
