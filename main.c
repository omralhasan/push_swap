/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:45:25 by oalhasan          #+#    #+#             */
/*   Updated: 2025/12/21 19:46:50 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
    sorted_list *a;
    sorted_list *b;
    char **numbers;
    
    a = NULL;
    b = NULL;
    
    if(argc == 1 || (argc == 2 && !argv[1][0]))
        return (1);
    if(argc == 2)
    numbers = ft_split(argv[1], ' ');
    
        return (0);
}
