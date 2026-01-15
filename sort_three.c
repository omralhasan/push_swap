/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:50:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/15 20:11:49 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	utils_three(t_stack *stack, int first, int second, int third)
{
	if (first > second && second < third && first < third)
		sa(stack);
	else if (first > second && second > third)
	{
		sa(stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
		ra(stack);
	else if (first < second && second > third && first < third)
	{
		sa(stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
}

void	sort_three(t_stack *stack)
{
	int	first;
	int	second;
	int	third;

	if (!stack || stack->size < 3 || !stack->top || !stack->top->next
		|| !stack->top->next->next)
		return ;
	first = stack->top->value;
	second = stack->top->next->value;
	third = stack->top->next->next->value;
	utils_three(stack, first, second, third);
}
