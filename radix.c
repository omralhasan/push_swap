/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 18:24:38 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/02 20:04:59 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	radix_sort(t_stack *a, t_stack *b)
{
    int	max_index;
    int	max_bits;
    int	i;
    int	j;
    int	size;

    if (!a || !b || a->size < 2)
        return ;
    max_index = 0;
    {
        sorted_list *cur = a->top;
        while (cur)
        {
            if (cur->index > max_index)
                max_index = cur->index;
            cur = cur->next;
        }
    }
    max_bits = 0;
    while ((max_index >> max_bits) != 0)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        size = a->size;
        while (j < size)
        {
            if (((a->top->index >> i) & 1) == 1)
                ra(a);
            else
                pb(a, b);
            j++;
        }
        while (b->size > 0)
            pa(a, b);
        i++;
    }
}
