/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:00:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:35:32 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_by_index(t_stack *a, int target)
{
	t_sorted_list	*cur;
	int				pos;

	if (!a || a->size == 0)
		return (-1);
	cur = a->top;
	pos = 0;
	while (cur)
	{
		if (cur->index == target)
			return (pos);
		cur = cur->next;
		pos++;
	}
	return (-1);
}

void	rotate_to_pos(t_stack *a, int pos)
{
	int	half;
	int	size;

	if (!a || pos < 0)
		return ;
	size = a->size;
	half = size / 2;
	if (pos <= half)
	{
		while (pos-- > 0)
			ra(a);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rra(a);
	}
}

