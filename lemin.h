#ifndef LEM_IN_H
# define LEM_IN_H

#include "libft/src/libft.h"

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

//char	***make_path(char **av, int ac); // should be static I think
void	divert_ants(int *ants, char **len);
void	print_ants(int *ants);
/*
** move_ants.c
*/
void	move_ants(char ***path, int  n_ant);
/*
** split_ants.c
*/
void	split_ants(t_print *print);
/*
** pathnum.c
*/
int		pathnum(int n, int *len);
/*
** one_path_2.c
*/
void	one_path_2(char **path, int n, int len);
t_move	*make_move(char **path, int len);
void	ant_turn(t_move *move, int i, int len);
void	put_move(t_move *move, int len);
void	del_move(t_move **move);
/*
** multi_path.c
*/
void	multi_path(char ***path, t_print *print);
void	turn_loop(t_print *print, t_move **moves);
void	put_loop(t_print *print, t_move **moves);
int		turn_amount(t_print *print);

/*typedef	struct	s_room
{
	int		x;
	int		y;
	int		ant;
	int		count;
	char	*name;
	char	**links;
}*/
# endif
