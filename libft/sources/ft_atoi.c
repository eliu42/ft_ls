/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <eliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 18:03:07 by eliu              #+#    #+#             */
/*   Updated: 2017/01/24 15:58:44 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	num;
	int	negative;

	negative = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' | *str == '+')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (negative * num);
}
