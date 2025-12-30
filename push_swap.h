/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:46:34 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/30 18:42:19 by oalhasan         ###   ########.fr       */
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
void	error_exit();
void	error_free(char **args);
int	is_valid_number(char *str);
void	validate_args(char **args);
void    push(t_stack *stack, t_stack *to);
int     pop(t_stack *stack);
int	    is_sorted(t_stack *stack);
void    free_stack(t_stack *stack);
void    sort_small_stack(t_stack *stack);
sorted_list	*new_node(int value);
void	push_top(t_stack *stack, sorted_list *node);
void	push_bottom(t_stack *stack, sorted_list *node);
void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);
void	assign_indexes(t_stack *stack);
void	print_stack(t_stack *stack);
void sort_two(t_stack *stack);
void sort_three(t_stack *stack);
void sort_small(t_stack *stack);
char	*ft_substr(char const *s, unsigned int start, size_t len);


#endif