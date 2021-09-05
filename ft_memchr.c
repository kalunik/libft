/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:21:45 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:21:45 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_new;
	unsigned char	c_new;
	size_t			i;

	s_new = (unsigned char *)s;
	c_new = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_new[i] == c_new)
			return (s_new + i);
		i++;
	}
	return (NULL);
}
