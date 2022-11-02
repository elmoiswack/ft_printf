/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigndec.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:17:33 by dhussain          #+#    #+#             */
/*   Updated: 2022/10/20 12:29:37 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigndec(va_list ptr, int len)
{
	unsigned int	j;
	int				temp;
	char			str[15];

	j = va_arg(ptr, unsigned int);
	if (j == 0)
	{
		write(1, "0", 1);
		len++;
	}
	temp = 0;
	while (j != 0)
	{
		str[temp] = (j % 10) + 48;
		j = j / 10;
		temp++;
	}
	temp--;
	while (temp >= 0)
	{
		write(1, &str[temp], 1);
		len++;
		temp--;
	}
	return (len);
}
