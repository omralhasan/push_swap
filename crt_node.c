/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crt_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 18:51:47 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/27 15:50:56 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
sorted_list	*new_node(int value)
{
	sorted_list	*node;

	node = malloc(sizeof(sorted_list));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	push_top(t_stack *stack, sorted_list *node)
{
	if (!node)
		return ;
	node->next = stack->top;
	stack->top = node;
	stack->size++;
}

void	push_bottom(t_stack *stack, sorted_list *node)
{
	sorted_list	*tmp;

	if (!stack->top)
	{
		stack->top = node;
	}
	else
	{
		tmp = stack->top;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
	}
	stack->size++;
}

void	swap(t_stack *stack)
{
	sorted_list	*first;
	sorted_list	*second;

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
	sorted_list	*tmp;

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
	sorted_list	*first;
	sorted_list	*last;

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
	sorted_list	*prev;
	sorted_list	*last;

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

void	assign_indexes(t_stack *stack)
{
	sorted_list	*current;
	sorted_list	*compare;
	int		index;

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
    sorted_list	*current;

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
	sorted_list	*tmp = stack->top;
	while (tmp)
	{
		printf("value: %d index: %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}





