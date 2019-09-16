/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loops.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:21:40 by vscott            #+#    #+#             */
/*   Updated: 2019/09/16 13:35:48 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

int			turn_amount(t_print *print)
{
	int	amount;
	int	i;

	i = 0;
	amount = (print->len[0] + print->ant[0]);
	while (print->len[++i])
		if (print->len[i] + print->ant[i] > amount)
			amount = print->len[i] + print->ant[i];
	return (amount);
}

void		turn_loop(t_print *print, t_move **moves)
{
	int	j;

	j = 0;
	while (j <= print->n_path && print->i < print->ant_tot + print->len_tot)
	{
		ant_turn(moves[j], (print->ant[j]-- > 0) ? print->i++ : 0,
				print->len[j]);
		j++;
	}
}

static int	check_move(t_move *move, int len)
{
	while (len--)
		if (move[len].ant)
			return (1);
	return (0);
}

void		put_loop(t_print *print, t_move **moves)
{
	int j;
	int	s;

	s = 0;
	j = 0;
	while (j <= print->n_path)
	{
		put_move(moves[j], print->len[j]);
		j++;
		if (check_move(moves[j], print->len[j]))
			ft_putchar(' ');
		else
			j++;
	}
}
