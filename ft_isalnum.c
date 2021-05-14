#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && 57 >= c) || (c >= 65 && 90 >= c) || (c >= 97 && 122 >= c))
		return (1);
	return (0);
}
