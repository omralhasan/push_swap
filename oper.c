/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:55:23 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/19 13:50:09 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (!a)
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	if (!b)
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	if (a)
		swap(a);
	if (b)
		swap(b);
	write(1, "ss\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
