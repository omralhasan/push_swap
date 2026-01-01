/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:55:23 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/01 19:35:52 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a)
{
    if (!a)
        return;
    swap(a);
    write(1, "sa\n", 3);
}

void sb(t_stack *b)
{
    if (!b)
        return;
    swap(b);
    write(1, "sb\n", 3);
}

void ss(t_stack *a, t_stack *b)
{
    if (a)
        swap(a);
    if (b)
        swap(b);
    write(1, "ss\n", 3);
}

void pa(t_stack *a, t_stack *b)
{
    if (!a || !b)
        return;
    /* take top of b and push it onto a */
    push(b, a);
    write(1, "pa\n", 3);
}

void pb(t_stack *a, t_stack *b)
{
    if (!a || !b)
        return;
    /* take top of a and push it onto b */
    push(a, b);
    write(1, "pb\n", 3);
}

void ra(t_stack *a)
{
    if (!a)
        return;
    rotate(a);
    write(1, "ra\n", 3);
}

void rb(t_stack *b)
{
    if (!b)
        return;
    rotate(b);
    write(1, "rb\n", 3);
}

void rr(t_stack *a, t_stack *b)
{
    if (a)
        rotate(a);
    if (b)
        rotate(b);
    write(1, "rr\n", 3);
}

void rra(t_stack *a)
{
    if (!a)
        return;
    reverse_rotate(a);
    write(1, "rra\n", 4);
}

void rrb(t_stack *b)
{
    if (!b)
        return;
    reverse_rotate(b);
    write(1, "rrb\n", 4);
}

void rrr(t_stack *a, t_stack *b)
{
    if (a)
        reverse_rotate(a);
    if (b)
        reverse_rotate(b);
    write(1, "rrr\n", 4);
}