#include "libft.h"

int	ft_isprint(int src)
{
	if (src >= 32 && 126 >= src)
		return (1);
	return (0);
}
