#include "lemin.h"
#include <stdio.h>

void	split_ants(t_print *print)
{
	int i;
	int	n;

	n = print->ant_tot;
	i = 0;
	//printf("mx is : %d\n", mx);
	//printf("len[mx] is : %d\n", len[mx]);
	while (i < print->n_path)
	{
		while (print->ant[i] + print->len[i] < print->len[print->n_path])
		{
			print->ant[i]++;
			n--;
		}
		i++;
		//print_ants(ant);
	}
	i = 0;
	while (n--)
	{
		//printf("i is : %d\n", i);
		print->ant[i++]++;
		if (i > print->n_path)
			i = 0;
	}
}
