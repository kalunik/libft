/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:23:25 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:23:25 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		else
			i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_f;
	size_t	count_r;
	size_t	len;
	char	*buf;

	if (!s1)
		return (NULL);
	count_f = 0;
	count_r = 0;
	len = ft_strlen(s1) - 1;
	while (char_in_set(s1[count_f], set))
		count_f++;
	while (char_in_set(s1[len], set) && len > 0)
	{
		len--;
		count_r++;
	}
	len = ft_strlen(s1);
	if (count_f + count_r >= len)
		len = 0;
	else
		len = len - count_f - count_r;
	buf = ft_substr(s1, count_f, len);
	return (buf);
}
