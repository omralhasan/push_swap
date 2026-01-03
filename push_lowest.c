/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_lowest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:49:57 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:35:32 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_lowest(t_stack *a, t_stack *b, int target_count)
{
 	int	pos;

    if (!a || !b)
        return (0);
    while (target_count > 0)
    {
        pos = find_pos_by_index(a, target_count - 1);
        if (pos == -1)
            return (0);
        rotate_to_pos(a, pos);
        pb(a, b);
        target_count--;
    }
    return (1);
}
