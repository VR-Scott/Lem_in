#include "lemin.h"
#include <stdio.h>

void	split_ants(int n, int *ant, char **len, int mx)
{
	int i;

	i = 0;
	printf("mx is : %d\n", mx);
	while (i < mx)
	{
		while (ant[i] + ft_strlen(len[i]) < ft_strlen(len[mx]))
		{
			print_ants(ant);
			ant[i]++;
			n--;
		}
		i++;
	}
	i = 0;
	while (n--)
	{
		printf("i is : %d\n", i);
		ant[i++]++;
		if (i > mx)
			i = 0;
	}
}
