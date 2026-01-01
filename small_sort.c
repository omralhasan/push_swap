/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 15:58:10 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/01 19:35:49 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void sort_small(t_stack *stack)
{
    if (!stack)
        return;
    if (stack->size == 2)
        sort_two(stack);
    else if (stack->size == 3)
        sort_three(stack);
}

void sort_small_stack(t_stack *stack)
{
    if (!stack)
        return;
    if (stack->size <= 3)
        sort_small(stack);
}