/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:55:23 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/19 18:55:37 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(sorted_list **a)
{
    swap_noprint(a);
    write(1, "sa\n", 3);
}

void sb(sorted_list **b)
{
    swap_noprint(b);
    write(1, "sb\n", 3);
}

void ss(sorted_list **a, sorted_list **b)
{
    swap_noprint(a);
    swap_noprint(b);
    write(1, "ss\n", 3);
}

void pa(sorted_list **a, sorted_list **b)
{
    push_noprint(a, b);
    write(1, "pa\n", 3);
}

void pb(sorted_list **a, sorted_list **b)
{
    push_noprint(b, a);
    write(1, "pb\n", 3);
}

void ra(sorted_list **a)
{
    rotate_noprint(a);
    write(1, "ra\n", 3);
}

void rb(sorted_list **b)
{
    rotate_noprint(b);
    write(1, "rb\n", 3);
}

void rr(sorted_list **a, sorted_list **b)
{
    rotate_noprint(a);
    rotate_noprint(b);
    write(1, "rr\n", 3);
}

void rra(sorted_list **a)
{
    rev_rotate_noprint(a);
    write(1, "rra\n", 4);
}

void rrb(sorted_list **b)
{
    rev_rotate_noprint(b);
    write(1, "rrb\n", 4);
}

void rrr(sorted_list **a, sorted_list **b)
{
    rev_rotate_noprint(a);
    rev_rotate_noprint(b);
    write(1, "rrr\n", 4);
}