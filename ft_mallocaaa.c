/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocaaa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:53:43 by dhussain          #+#    #+#             */
/*   Updated: 2022/10/31 09:38:29 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_mallocaaa(unsigned long j)
{
	int					i;
	char				*tempstr;

	i = 0;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	tempstr = malloc((i + 1) * sizeof(char));
	if (!tempstr)
		return (NULL);
	return (tempstr);
}
