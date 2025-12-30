/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:55:23 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/30 16:54:29 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(sorted_list **a)
{
    swap(a);
    write(1, "sa\n", 3);
}

void sb(sorted_list **b)
{
    swap(b);
    write(1, "sb\n", 3);
}

void ss(sorted_list **a, sorted_list **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}

void pa(sorted_list **a, sorted_list **b)
{
    push(a, b);
    write(1, "pa\n", 3);
}

void pb(sorted_list **a, sorted_list **b)
{
    push(b, a);
    write(1, "pb\n", 3);
}

void ra(sorted_list **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}

void rb(sorted_list **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}

void rr(sorted_list **a, sorted_list **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}

void rra(sorted_list **a)
{
    reverse_rotate(a);
    write(1, "rra\n", 4);
}

void rrb(sorted_list **b)
{
    reverse_rotate(b);
    write(1, "rrb\n", 4);
}

void rrr(sorted_list **a, sorted_list **b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    write(1, "rrr\n", 4);
}