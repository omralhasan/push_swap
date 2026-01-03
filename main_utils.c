/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:49:57 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:35:32 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <errno.h>
int	push_value(t_stack *a, char *s, int argc)
{
 	long		val;
 	char		*endptr;
 	t_sorted_list	*node;

    errno = 0;
    val = strtol(s, &endptr, 10);
    if (*endptr != '\0' || errno == ERANGE || val < INT_MIN || val > INT_MAX)
    {
        if (argc == 2)
            error_free(&s);
        error_exit();
    }
    node = new_node((int)val);
    if (!node)
    {
        if (argc == 2)
            error_free(&s);
        error_exit();
    }
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
