#include "lemin.h"
#include <stdio.h>
int		pathnum(int n, char **len)
{
	int splits;
	int i;

	i = 0;
	splits = 0;
	if ((n - i) + ft_strlen(len[0]) >= i + ft_strlen(len[1]))
	{
		while ((n - i) + ft_strlen(len[0]) >= i + ft_strlen(len[1]))
			i++;
		printf("i is %d\n", i - 1);
		splits++;
	}
	if (len[2])
		splits += pathnum(i - 1, len + 1);
	printf("split is %d\n", splits);
	return (splits);
}
