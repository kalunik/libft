#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && 90 >= c)
		return (c + 32);
	return (c);
}
