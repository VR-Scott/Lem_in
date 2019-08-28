#include <stdlib.h>
#include "lemin.h"

int	main(int ac, char **av)
{
	if (ac > 2)
	{
		move_ants(av + 2, atoi(av[1]));
	}
	return (0);
}
