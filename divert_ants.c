#include "lemin.h"

#include <stdio.h>

void	divert_ants(int *ant, char **len)
{
	int i;

	i = 0;
	while ((ant[0] - 1) + ft_strlen(len[0]) >= ant[1] + 1 + ft_strlen(len[i]))
	{
		//printf("ant[0] is : %d\nant[1] is : %d\n", ant[0], ant[1]);
		if ((ant[0] - 1) + ft_strlen(len[0]) >= ant[1] + 1 + ft_strlen(len[i]))
		{
			while ((ant[0]) + ft_strlen(len[0]) >= ant[1] + ft_strlen(len[i]))
			{
				ant[1]++;
				ant[0]--;
			}
			ant[1]--;
			ant[0]++;
			ant[1]--;
			ant[0]++;
			print_ant(ant);
			ft_putchar('\n');
			if (len[2])
				divert_ant(ant + 1, len + 1);
			sleep(10);
		}
		printf("ant[0] is : %d\nant[1] is : %d\n", ant[0] + 1, ant[1] - 1);
	}
}
