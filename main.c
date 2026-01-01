/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:45:25 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/01 20:09:29 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <errno.h>

static char	**get_args(int argc, char **argv)
{
    char	**res;
    int		dummy;

    dummy = 0;
    if (argc < 2)
    {
        return (NULL);
    }
    if (argc == 2)
    {
        res = ft_split(argv[1], ' ');
        if (!res)
            return (NULL);
        return (res);
    }
    /* multiple args mode - return pointer to argv[1] */
    res = &argv[1];
    (void)dummy;
    /* caller should not free res when argc > 2 */
    return (res);
}

static int	build_stack(t_stack *a, char **nums, int argc)
{
    int				i; long val; char *endptr; sorted_list *node;
    i = 0;
    while (nums[i])
    {
        errno = 0;
        val = strtol(nums[i], &endptr, 10);
        if (*endptr != '\0' || errno == ERANGE || val < INT_MIN || val > INT_MAX)
        {
            if (argc == 2)
                error_free(nums);
            error_exit();
        }
        node = new_node((int)val);
        if (!node)
        {
            if (argc == 2)
                error_free(nums);
            error_exit();
        }
        push_bottom(a, node); i++;
    }
    return (1);
}

int	main(int argc, char **argv)
{
    t_stack		a; t_stack b;
    char		**nums;
    int			ret; int i;

    if (argc < 2)
        return (0);
    nums = get_args(argc, argv);
    if (!nums)
        return (0);
    validate_args(nums);
    a.top = NULL; a.size = 0; b.top = NULL; b.size = 0;
    ret = build_stack(&a, nums, argc);
    if (argc == 2)
    {
        i = 0;
        while (nums[i])
            free(nums[i++]);
        free(nums);
    }
    assign_indexes(&a); if (a.size && !is_sorted(&a) && a.size <= 3)
        sort_small_stack(&a);
    return (0);
}
