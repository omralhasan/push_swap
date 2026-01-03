/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:00:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 19:49:57 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_sorted_list	*first;
	t_sorted_list	*second;

	if (stack->size < 2)
		return ;
	first = stack->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->top = second;
}

void	push(t_stack *from, t_stack *to)
{
	t_sorted_list	*tmp;

	if (from->size == 0)
		return ;
	tmp = from->top;
	from->top = tmp->next;
	from->size--;
	tmp->next = to->top;
	to->top = tmp;
	to->size++;
}

void	rotate(t_stack *stack)
{
	t_sorted_list	*first;
	t_sorted_list	*last;

	if (stack->size < 2)
		return ;
	first = stack->top;
	stack->top = first->next;
	first->next = NULL;
	last = stack->top;
	while (last->next)
		last = last->next;
	last->next = first;
}

void	reverse_rotate(t_stack *stack)
{
	t_sorted_list	*prev;
	t_sorted_list	*last;

	if (stack->size < 2)
		return ;
	prev = NULL;
	last = stack->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = stack->top;
	stack->top = last;
}
