/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:00:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 19:49:57 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_indexes(t_stack *stack)
{
	t_sorted_list	*current;
	t_sorted_list	*compare;
	int				index;

	current = stack->top;
	while (current)
	{
		index = 0;
		compare = stack->top;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

int	is_sorted(t_stack *stack)
{
	t_sorted_list	*current;

	if (stack->size < 2)
		return (1);
	current = stack->top;
	while (current && current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

void	print_stack(t_stack *stack)
{
	t_sorted_list	*tmp;

	tmp = stack->top;
	while (tmp)
	{
		printf("value: %d index: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}

void	free_stack(t_stack *stack)
{
	t_sorted_list	*tmp;
	t_sorted_list	*next;

	if (!stack)
		return ;
	tmp = stack->top;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	stack->top = NULL;
	stack->size = 0;
}
