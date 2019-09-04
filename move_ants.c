#include "lemin.h"
#include <stdio.h>

void	print_ants(int *ants)
{
	int i = 0;

	while (ants[i])
	{
		ft_putnbr(ants[i++]);
		ft_putchar('\n');
	}
}

int	cnt_path(char ***path)
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
}

void	del_ant_len(int **arr)
{
	free(*arr);
	*arr = NULL;
}

void	move_ants(char ***path, int  n_ant)
{
	int		n_path;
	int		v_path;
	int		*ant;
	int		*len;

	n_path = cnt_path(path);
	len = path_len(path, n_path);
	print_len(len, n_path);
	if (!(ant = (int*)ft_memalloc(sizeof(int) * n_path)))
			ant = NULL;
	if (n_path == 1)
		ft_putstr("1 path\n");
//		1_path(path,n_ants);
	else
	{
		v_path = pathnum(n_ant, len);
		split_ants(n_ant, ant, len, v_path);
		printf("ant is:\n");
		print_ants(ant);
	}
	del_ant_len(&ant);
	del_ant_len(&len);
}
