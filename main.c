/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:45:25 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/03 22:38:53 by oalhasan         ###   ########.fr       */
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
	res = &argv[1];
	(void)dummy;
	return (res);
}

static int	build_stack(t_stack *a, char **nums, int argc)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		if (!push_value(a, nums[i], argc))
			return (0);
		i++;
	}
	return (1);
}

static void	do_sort_and_cleanup(t_stack *a, t_stack *b)
{
	assign_indexes(a);
	if (a->size && !is_sorted(a))
	{
		if (a->size <= 5)
			sort_small_stack(a, b);
		else
			radix_sort(a, b);
	}
	free_stack(a);
	free_stack(b);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	**nums;

	if (argc < 2)
		return (0);
	nums = get_args(argc, argv);
	if (!nums)
		return (0);
	if (validate_args(nums))
	{
		if (argc == 2)
			error_free(nums);
		error_exit();
	}
	a.top = NULL;
	a.size = 0;
	b.top = NULL;
	b.size = 0;
	build_stack(&a, nums, argc);
	if (argc == 2)
		free_split(nums);
	do_sort_and_cleanup(&a, &b);
	return (0);
}
