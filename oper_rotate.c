/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:00:00 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:35:32 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	if (!a)
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	if (!b)
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	if (a)
		rotate(a);
	if (b)
		rotate(b);
	write(1, "rr\n", 3);
}
