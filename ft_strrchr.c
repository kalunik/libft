/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:23:19 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:23:19 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_new;
	char	c_new;
	int		i;
	int		n;

	s_new = (char *)s;
	c_new = (char)c;
	i = 0;
	while (s_new[i])
	{
		i++;
	}
	n = i;
	while (i >= 0)
	{
		if (c_new == '\0')
			return (s_new + n);
		if (s_new[i] == c_new)
			return (s_new + i);
		i--;
	}
	return (NULL);
}
