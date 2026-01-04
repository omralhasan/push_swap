/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:24:38 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:37:15 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_index(t_stack *a)
{
	int				max_index;
	t_sorted_list	*cur;

	max_index = 0;
	cur = a->top;
	while (cur)
	{
		if (cur->index > max_index)
			max_index = cur->index;
		cur = cur->next;
	}
	return (max_index);
}

static void	process_bit(t_stack *a, t_stack *b, int bit)
{
	int	j;
	int	size;

	j = 0;
	size = a->size;
	while (j < size)
	{
		if (((a->top->index >> bit) & 1) == 1)
			ra(a);
		else
			pb(a, b);
		j++;
	}
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_index;
	int	max_bits;
	int	i;

	if (!a || !b || a->size < 2)
		return ;
	max_index = get_max_index(a);
	max_bits = 0;
	while ((max_index >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		process_bit(a, b, i);
		while (b->size > 0)
			pa(a, b);
		i++;
	}
}
