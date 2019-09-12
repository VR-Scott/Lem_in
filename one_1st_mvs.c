/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_1st_mvs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:46:01 by vscott            #+#    #+#             */
/*   Updated: 2019/09/08 11:34:56 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	one_1st_mvs(char **path, int n, int len)
{
	int i;
	int ant;
	int p;

	i = 1;
	ant = 1;
	p = 2;
	while (p > 0)
	{
		while (--p > 0)
		{
			if (path[p])
				print_moves(ant, path[p]);
			if (p > 1)
				ft_putchar(' ');
			ant++;
		}
		p = ++i;
		ft_putchar('\n');
		if (ant > n || i > len)
			break ;
		ant = 1;
	}
}
