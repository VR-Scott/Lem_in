#ifndef LEM_IN_H
# define LEM_IN_H

#include "libft/src/libft.h"

char	***make_path(char **av, int ac);
void	divert_ants(int *ants, char **len);
int		pathnum(int n, int *len);
void	print_ants(int *ants);
void	split_ants(int n, int *ant, int *len, int mx);
void	move_ants(char ***path, int  n_ant);

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
