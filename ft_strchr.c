/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:22:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:22:36 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s_new;
	char	c_new;

	s_new = (char *)s;
	c_new = (char)c;
	while (*s_new || c_new == '\0')
	{
		if (*s_new == c_new)
			return (s_new);
		s_new++;
	}
	return (NULL);
}
