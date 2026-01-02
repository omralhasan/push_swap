/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:46:34 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/02 20:04:54 by oalhasan         ###   ########.fr       */
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

void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    rrr(t_stack *a, t_stack *b);

char	**ft_split(char const *s, char c);
void	error_exit();
void	error_free(char **args);
int	is_valid_number(char *str);
int	validate_args(char **args);

void    push(t_stack *from, t_stack *to);
int     pop(t_stack *stack);
int	    is_sorted(t_stack *stack);
void    free_stack(t_stack *stack);
void    sort_small_stack(t_stack *stack , t_stack *b);
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
void sort_small(t_stack *stack , t_stack *b);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	sort_four_five(t_stack *a, t_stack *b);
void	radix_sort(t_stack *a, t_stack *b);

#endif