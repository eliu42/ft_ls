/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 21:22:48 by eliu              #+#    #+#             */
/*   Updated: 2017/01/24 21:37:04 by eliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int argc, char **argv)
{
	int		i;
	
	if (argc == 1)
	{
		ft_putstr("hello");
		ft_putendl("regular ls");
		return (0);
	}
	i = 0;
	while (argv[i])
		i++;
	
	return (0);
}
