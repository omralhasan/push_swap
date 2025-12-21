/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_hand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:13:42 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/19 19:17:27 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit()
{
	write(2, "Error\n", 6);
	exit(1);
}

void	error_free(char **args)
{
	int	i = 0;

	if (args)
	{
		while (args[i])
			free(args[i++]);
		free(args);
	}
	write(2, "Error\n", 6);
	exit(1);
}


int	is_valid_number(char *str)
{
    int	i = 0;
    int	sign_count = 0;

    if (str[i] == '-' || str[i] == '+')
    {
        sign_count++;
        i++;
    }
    if (str[i] == '\0')
        return (0);
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    if (sign_count > 1)
        return (0);
    return (1);
}

void	validate_args(char **args)
{
	int	i = 0;

	while (args[i])
	{
		if (!is_valid_number(args[i]))
			error_exit();
		i++;
	}
}
