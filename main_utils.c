/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:49:57 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/15 18:33:26 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_value(t_stack *a, char *s, int argc)
{
	int				val;
	int				i;
	t_sorted_list	*node;

	(void)argc;
	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	if (!s[i])
		error_exit();
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			error_exit();
		i++;
	}
	val = ft_atoi(s);
	if (val < -2147483648 || val > 2147483647)
		error_exit();
	node = new_node(val);
	if (!node)
		error_exit();
	push_bottom(a, node);
	return (1);
}

void	free_split(char **nums)
{
	int	i;

	i = 0;
	if (!nums)
		return ;
	while (nums[i])
	{
		free(nums[i]);
		i++;
	}
	free(nums);
}
