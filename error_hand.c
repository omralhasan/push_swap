/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_hand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 19:13:42 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/02 20:02:49 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

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
    int	i;

    if (!str || str[0] == '\0')
        return (0);
    if (str[0] == '-' && str[1] == '0' && str[2] == '\0')
        return (0);
    i = 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i + 1] == '\0')
            return (0);
        i++;
    }
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

static int	has_duplicate(char **args)
{
    int		i;
    int		j;
    long	a;
    long	b;
    char	*end;

    i = 0;
    while (args[i])
    {
        a = strtol(args[i], &end, 10);
        j = i + 1;
        while (args[j])
        {
            b = strtol(args[j], &end, 10);
            if (a == b)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int	validate_args(char **args)
{
    int	i;

    i = 0;
    while (args[i])
    {
        if (!is_valid_number(args[i]))
            return (1);
        i++;
    }
    if (has_duplicate(args))
        return (1);
    return (0);
}
