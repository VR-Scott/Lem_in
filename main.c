#include "lemin.h"
#include <stdlib.h>
#include <stdio.h>

static char	***make_path(char **av, int ac)
{
	char	***path;
	int		i;

	i = 0;
	if(!(path = (char ***)ft_memalloc(sizeof(char**) * ac + 1)))
		ft_putstr("couldn't malloc for path"); 
	while (i < ac)
	{
		path[i] = ft_strsplit(av[i], ' ');
		i++;
	}
	path[i] = NULL;
	return (path);
}

void		del_path(char ****path)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*path)
		while ((*path)[i])
		{
			while ((*path)[i][j])
				ft_strdel(&(*path)[i][j++]);
			i++;
		}
	*path = NULL;
}

int			main(int ac, char **av)
{
	if (ac > 2)
	{
		char	***path;

		path = make_path(av + 2, ac - 2);
		move_ants(path, ft_atoi(av[1]));
		del_path(&path);
	}
	return (0);
}
