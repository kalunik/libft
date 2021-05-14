#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*buf;
	unsigned int	buf_start;
	size_t			full_len;

	if (!s)
		return (NULL);
	buf_start = 0;
	full_len = ft_strlen(s);
	if (len > full_len)
		len = full_len;
	if (start > full_len)
		start = full_len;
	if (start + len > full_len)
		len = full_len - start;
	buf = (char *)malloc((len + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);
	while (buf_start < len)
	{
		buf[buf_start] = s[start];
		start++;
		buf_start++;
	}
	buf[buf_start] = '\0';
	return (buf);
}
