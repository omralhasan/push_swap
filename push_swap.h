/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:46:34 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/21 18:53:10 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
typedef struct sorted_list
{
   	int				value;   
	int				index; 
    struct sorted_list   *next;
}                   sorted_list;

typedef struct s_stack
{
	sorted_list	*top;
	int		size;
}	t_stack;

void    sa(sorted_list **a);
void    sb(sorted_list **b);
void    ss(sorted_list **a, sorted_list **b);
void    pa(sorted_list **a, sorted_list **b);
void    pb(sorted_list **a, sorted_list **b);
void    ra(sorted_list **a);
void    rb(sorted_list **b);
void    rr(sorted_list **a, sorted_list **b);
void    rra(sorted_list **a);
void    rrb(sorted_list **b);
void    rrr(sorted_list **a, sorted_list **b);
char	**ft_split(char const *s, char c);

#endif