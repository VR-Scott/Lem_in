#include "lemin.h"

#include <stdio.h>

void	divert_ants(int *ants, char **len)
{
	int i;

	i = 0;
	while ((ants[0] - 1) + ft_strlen(len[0]) >= ants[1] + 1 + ft_strlen(len[i]))
	{
		//printf("ants[0] is : %d\nants[1] is : %d\n", ants[0], ants[1]);
		if ((ants[0] - 1) + ft_strlen(len[0]) >= ants[1] + 1 + ft_strlen(len[i]))
		{
			while ((ants[0]) + ft_strlen(len[0]) >= ants[1] + ft_strlen(len[i]))
			{
				ants[1]++;
				ants[0]--;
			}
			ants[1]--;
			ants[0]++;
			ants[1]--;
			ants[0]++;
			print_ants(ants);
			ft_putchar('\n');
			if (len[2])
				divert_ants(ants + 1, len + 1);
			sleep(10);
		}
		printf("ants[0] is : %d\nants[1] is : %d\n", ants[0] + 1, ants[1] - 1);
	}
}
