/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_path_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 09:58:02 by vscott            #+#    #+#             */
/*   Updated: 2019/09/12 15:14:44 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	print_move(t_move *move)
{
	int i;

	i = 0;
	while((move[i]).room)
	{
		ft_putstr("room is:\n");
		ft_putstr((move[i]).room);
		ft_putchar('\n');
		ft_putstr("ant is:\n");
		ft_putnbr((move[i++]).ant);
		ft_putchar('\n');
	}
}

void	put_move(t_move *move, int len)
{
	int	i;

	i = 0;
	while(len--)
	{
		//ft_putchar('\n');
		//ft_putstr("len is :\n");
		//ft_putchar('\n');
		//ft_putstr("move[len].ant is :\n");
		//ft_putnbr(move[len].ant);
		//ft_putchar('\n');
		if (move[len].ant)
		{	
//			ft_putnbr(i);
			if (i++)
				ft_putchar(' ');
			ft_putchar('L');
			ft_putnbr((move[len]).ant);
			ft_putchar('-');
			ft_putstr((move[len]).room);
		}
	}
}

void	del_move(t_move **move)
{
	free(*move);
	*move = NULL;
}

t_move	*make_move(char **path, int len)
{
	int		i;
	t_move *move;

	i = 0;
	move = (t_move*)ft_memalloc(sizeof(t_move) * len + 1);
	while (i < len)
	{
		(move[i]).room = path[i + 1];
		(move[i++]).ant = 0;
	}
	move[i].room = NULL;
	return (move);
}

void	ant_turn(t_move *move, int i, int len)
{
	//ft_putstr("i is:\t");
	//ft_putnbr(i);
	//ft_putchar('\n');
	while (len)
	{
		move[len].ant = move[len - 1].ant;
		len--;
	}
	move[0].ant = i;
}

void	one_path_2(char **path, int n_ant, int len)
{
	t_move	*move;
	int		i;

	if (n_ant)
	{
		i = 1;
		move = make_move(path, len);
		//move_move(move_path);
		while(i < n_ant + len)
		{
			ant_turn(move, (i <= n_ant) ?i : 0, len);
			put_move(move, len);
			ft_putchar('\n');
			i++;
			//put_path(move_path, len);
		}
		del_move(&move);
	}
}
