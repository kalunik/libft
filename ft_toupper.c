#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && 122 >= c)
		return (c - 32);
	return (c);
}
