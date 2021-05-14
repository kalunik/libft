#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*rez;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	rez = (char *) malloc((len + 1) * sizeof(char));
	if (rez == NULL)
		return (NULL);
	while (i < len)
	{
		rez[i] = f(i, s[i]);
		i++;
	}
	rez[i] = '\0';
	return (rez);
}
