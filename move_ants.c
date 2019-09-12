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

static int	cnt_path(char ***path)
{
	int i;
	
	i = 0;
	while(path[i])
		i++;
	return (i);
}

static int	rm_cnt(char **path)
{
	int i;

	i = 0;
	while (path[i])
		i++;
	return (i - 1);
}

static int	*path_len(char ***path, int n)
{
	int	*len;
	int	i;

	i = 0;
	if (!(len = (int*)ft_memalloc(sizeof(int) * (n + 1))))
		ft_putstr("couldn't malloc for len\n");
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
	t_print	*print;

	print = (t_print*)ft_memalloc(sizeof(t_print));
	print->ant_tot = n_ant;
	print->n_path = cnt_path(path);
	print->len = path_len(path, print->n_path);
	//print_len(print->len, print->n_path);
	if (!(print->ant = (int*)ft_memalloc(sizeof(int) * (print->n_path + 1))))
	{
		ft_putstr("couldn't malloc ant\n");
			print->ant = NULL;
	}
	if (print->n_path == 1 || n_ant == 1)
		one_path_2(path[0], n_ant, print->len[0]);
	else
	{
		if(!(print->n_path = pathnum(n_ant, print->len)))
			one_path_2(path[0], n_ant, print->len[0]);
		else
		{
			split_ants(print);
			multi_path(path, print);
		}
	}
	del_ant_len(&(print->ant));
	del_ant_len(&(print->len));
}
