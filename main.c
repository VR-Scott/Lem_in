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

void	print_ants(int *ants)
{
	int i = 0;

	while (ants[i])
	{
		ft_putnbr(ants[i++]);
		ft_putchar('\n');
	}
}

int main(int ac, char **av)
{
	if (ac > 3)
	{
		int	*ant;
		int n;

		ant = (int*)ft_memalloc(sizeof(int) * (ac - 1));
		n = atoi(av[1]);
		split_ants(n, ant, av + 2, pathnum(n, av + 2)); 
		print_ants(ant);
	}
	return (0);
}
