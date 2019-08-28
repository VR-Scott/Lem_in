#include "lemin.h"

void	print_path(char ***path)
{
	int i;

	i = 0;
	if (path)
	{
		while (path[i])
		{
			ft_putstr("path[");
			ft_putnbr(i);
			ft_putstr("]:\n");
			ft_putendl_2d(path[i++]);
		}
	}
}

void	move_ants(char **paths, int ants)
{
	char ***path;

	path = make_path(paths);
	print_path(path);
}
