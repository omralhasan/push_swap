/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalshbou <oalshbou@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:50:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/04 17:41:14 by oalshbou         ###   ########.fr       */
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
