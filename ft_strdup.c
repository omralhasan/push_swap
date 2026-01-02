/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalhasan <oalhasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 01:35:12 by oalhasan          #+#    #+#             */
/*   Updated: 2026/01/02 20:03:14 by oalhasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
char	*ft_strdup(const char *s)
{
	char	*x;
	size_t	len;

	len = ft_strlen(s);
	x = (char *)malloc(len + 1);
	if (!x)
		return (NULL);
	ft_strlcpy(x, s, len + 1);
	return (x);
}
