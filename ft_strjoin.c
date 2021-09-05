/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:22:47 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:22:47 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	i;
	char	*buf;

	if (!s1)
		return (NULL);
	l1 = ft_strlen(s1);
	i = 0;
	buf = (char *)malloc((l1 + ft_strlen(s2) + 1) * sizeof(char));
	if (buf == NULL)
		return (NULL);
	while (i < l1)
	{
		buf[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		buf[l1 + i] = s2[i];
		i++;
	}
	buf[l1 + i] = '\0';
	return (buf);
}
