/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexalower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:18:07 by dhussain          #+#    #+#             */
/*   Updated: 2022/10/27 12:30:25 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	convert(unsigned int j, char *tempstr, char *str, int len);

int	ft_printf_hexalower(va_list ptr, int len)
{
	char				tempstr[15];
	unsigned int		j;
	char				*str;

	j = va_arg(ptr, unsigned int);
	if (j == 0)
	{
		write(1, "0", 1);
		len++;
	}
	str = "0123456789abcdef";
	len = convert(j, tempstr, str, len);
	return (len);
}

static int	convert(unsigned int j, char *tempstr, char *str, int len)
{
	int				i;
	unsigned int	temp;

	i = 0;
	while (j != 0)
	{
		temp = j % 16;
		j = j / 16;
		tempstr[i] = str[temp];
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &tempstr[i], 1);
		i--;
		len++;
	}
	return (len);
}
