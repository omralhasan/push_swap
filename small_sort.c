/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:58:10 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/02 18:05:11 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos_by_index(t_stack *a, int target)
{
    sorted_list	*cur;
    int			pos;

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

static void	rotate_to_pos(t_stack *a, int pos)
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

void sort_two(t_stack *stack)
{
    if (!stack || stack->size < 2 || !stack->top || !stack->top->next)
        return;
    if (stack->top->value > stack->top->next->value)
        sa(stack);
}

void sort_three(t_stack *stack)
{
    if (!stack || stack->size < 3 || !stack->top || !stack->top->next || !stack->top->next->next)
        return;

    int first = stack->top->value;
    int second = stack->top->next->value;
    int third = stack->top->next->next->value;

    if (first > second && second < third && first < third)
        sa(stack);
    else if (first > second && second > third)
    {
        sa(stack);
        rra(stack);
    }
    else if (first > second && second < third && first > third)
        ra(stack);
    else if (first < second && second > third && first < third)
    {
        sa(stack);
        ra(stack);
    }
    else if (first < second && second > third && first > third)
        rra(stack);
}

void sort_small(t_stack *stack , t_stack *b)
{
    if (!stack)
        return;
    if (stack->size == 2)
        sort_two(stack);
    else if (stack->size == 3)
        sort_three(stack);
        else if (stack->size == 4 || stack->size == 5)
        sort_four_five(stack,b);
}

void sort_small_stack(t_stack *stack ,  t_stack *b)
{
    if (!stack)
        return;
    if (stack->size <= 5)
        sort_small(stack , b);
}

void	sort_four_five(t_stack *a, t_stack *b)
{
    int		orig;
    int		limit;
    int		target;
    int		pos;

    if (!a || !b)
        return ;
    orig = a->size;
    if (orig != 4 && orig != 5)
        return ;
    limit = orig - 3;
    target = 0;
    while (target < limit)
    {
        pos = find_pos_by_index(a, target);
        if (pos == -1)
            return ;
        rotate_to_pos(a, pos);
        pb(a, b);
        target++;
    }
    sort_three(a);
    while (b->size > 0)
        pa(a, b);
}
