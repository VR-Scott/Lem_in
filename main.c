#include "lemin.h"
#include <stdlib.h>
#include <stdio.h>

/*char ***make_paths(char **av)
  {
  char ***paths;
  while(paths[i])
  {
  paths[i] = ft_strsplit(av, ' ');
  }
  }*/

/*int	main(int ac, char **av)
  {
  if (ac > 2)
  {
  move_ants(av + 2, atoi(av[1]));
  }
  return (0);
  }*/

/*void	print_ants(int *ants)
{
	int i = 0;

	while (ants[i])
	{
		ft_putnbr(ants[i++]);
		ft_putchar('\n');
	}
}*/

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

/*void	print_path(char ***path)
{
	int i;

	i = 0;
	while(path[i])
	{
		ft_putstr("path[");
		ft_putnbr(i);
		ft_putstr("]\n");
		ft_putendl_2d(path[i++]);
	}
}*/

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

/*int	cnt_path(char ***path)
{
	int i;
	
	i = 0;
	while(path[i])
		i++;
	return (i);
}

int	rm_cnt(char **path)
{
	int i;

	i = 0;
	while (path[i])
		i++;
	return (i - 1);
}

int	*path_len(char ***path, int n)
{
	int	*len;
	int	i;

	i = 0;
	if (!(len = (int*)ft_memalloc(sizeof(int) * (n + 1))))
		len = NULL;
	while (i < n)
	{
		len[i] = rm_cnt(path[i]);
		i++;
	}
	return (len);
}

void	print_len(int *len, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putnbr(len[i++]);
		ft_putchar('\n');
	}
}*/

int			main(int ac, char **av)
{
	if (ac > 2)
	{
//		int		*ant;
//		int		n_ant;
//		int		n_path;
//		int		v_path;
		char	***path;
//		int		*len;

		path = make_path(av + 2, ac - 2);
		//print_path(path);
//		n_path = cnt_path(path);
		move_ants(path, ft_atoi(av[1]));
//		printf("n_path is : %d\n", n_path);
//		len = path_len(path, n_path);
//		print_len(len, n_path);
//		if (!(ant = (int*)ft_memalloc(sizeof(int) * n_path)))
//			ant = NULL;
//		n_ant = atoi(av[1]);
		//printf("n_ant is : %d\n", n_ant);
//		v_path = pathnum(n_ant, len);
//		split_ants(n_ant, ant, len, v_path); 
//		printf("ant is:\n");
//		print_ants(ant);
		del_path(&path);
	}
	return (0);
}
