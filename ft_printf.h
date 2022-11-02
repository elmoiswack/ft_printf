/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhussain <dhussain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:26:30 by dhussain          #+#    #+#             */
/*   Updated: 2022/10/31 09:35:49 by dhussain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf_char(va_list ptr, int len);
int				ft_printf_string(va_list ptr, int len);
int				ft_printf_pointer(va_list ptr, int len);
int				ft_printf_int(va_list ptr, int len);
int				ft_printf_unsigndec(va_list ptr, int len);
int				ft_printf_hexalower(va_list ptr, int len);
int				ft_printf_hexaupper(va_list ptr, int len);
int				check(const char *string, int i, va_list ptr, int len);
unsigned long	intcheck(long j);
char			*ft_mallocaaa(unsigned long j);
int				ft_printf(const char *string, ...);

#endif
