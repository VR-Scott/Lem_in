/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscott <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:26:18 by vscott            #+#    #+#             */
/*   Updated: 2019/09/16 13:29:53 by vscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include "libft/src/libft.h"

typedef struct	s_move
{
	char		*room;
	int			ant;
}				t_move;

typedef struct	s_print
{
	int			i;
	int			len_tot;
	int			n_path;
	int			ant_tot;
	int			*ant;
	int			*len;
}				t_print;

/*
** move_ants.c
*/
void			move_ants(char ***path, int n_ant);
/*
** split_ants.c
*/
void			split_ants(t_print *print);
/*
** num_of_path.c
*/
int				num_of_path(int n, int *len);
/*
** one_path.c
*/
void			one_path(char **path, int n, int len);
t_move			*make_move(char **path, int len);
void			ant_turn(t_move *move, int i, int len);
void			put_move(t_move *move, int len);
void			del_move(t_move **move);
/*
** multi_path.c
*/
void			multi_path(char ***path, t_print *print);
/*
** loops.c
*/
void			turn_loop(t_print *print, t_move **moves);
void			put_loop(t_print *print, t_move **moves);
int				turn_amount(t_print *print);

#endif
