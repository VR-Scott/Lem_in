#include <unistd.h>
# define MAG "\033[0;35m"
#include "../libft/src/libft.h"

int	main(int ac, char **av)
{
	ft_putstr(MAG);
	ft_putstr("hello");
	return (0);
}
