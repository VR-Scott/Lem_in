#include "lemin.h"

int		count_paths(char **paths)
{
	int	count;

	count = 0;
	while (*(paths++))
		count++;
	return (count);
}

char	***make_path( char **paths)
{
	int		path_count;
	int		i;
	char	***path;

	i = 0;
	path_count = count_paths(paths);
	path = (char***)malloc(sizeof(char**) * (path_count + 1));
	while (i < path_count)
	{
		path[i] = ft_strsplit(paths[i], ' ');
		i++;
	}
	path[i] = NULL;
	return (path);
}
