#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && 90 >= c) || (c >= 97 && 122 >= c))
		return (1);
	return (0);
}
