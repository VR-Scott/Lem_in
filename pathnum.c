#include "lemin.h"
#include <stdio.h>
int		pathnum(int n, int *len)
{
	int splits;
	int i;

	i = 1;
	splits = 0;
	if ((n - i) + len[0] >= i + len[1])
	{
		while ((n - i) + len[0] >= i + len[1])
			i++;
		printf("i is %d\n", i - 1);
		splits++;
	}
	if (len[2])
		splits += pathnum(i - 1, len + 1);
	printf("split is %d\n", splits);
	return (splits);
}
