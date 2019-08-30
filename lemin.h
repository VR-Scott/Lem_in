#ifndef LEM_IN_H
# define LEM_IN_H

#include "libft/src/libft.h"

void	move_ants(char **paths, int ants);

char	***make_path(char **paths);
void	divert_ants(int *ants, char **len);
void	print_ants(int *ants);

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
