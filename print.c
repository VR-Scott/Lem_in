#include "lemin.h"

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

void	print_ants(int *ants)
{
	int i = 0;

	while (ants[i])
	{
		ft_putnbr(ants[i++]);
		ft_putchar('\n');
	}
}

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

void	print_moves(t_move **moves, int *len)
{
	int i;

	i = -1;
	while (moves[++i])
	{
		ft_putstr("moves[");
		ft_putnbr(i);
		ft_putstr("] is :\n");
		put_move(moves[i], len[i]);
		ft_putchar('\n');
	}
}
