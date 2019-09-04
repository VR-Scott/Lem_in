#include "lemin.h"
#include <stdio.h>

void	split_ants(int n, int *ant, int *len, int mx)
{
	int i;

	i = 0;
	printf("mx is : %d\n", mx);
	printf("len[mx] is : %d\n", len[mx]);
	while (i < mx)
	{
		while (ant[i] + len[i] < len[mx])
		{
			ant[i]++;
			n--;
		}
		i++;
		print_ants(ant);
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
