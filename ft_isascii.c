#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && 127 >= c)
		return (1);
	return (0);
}
