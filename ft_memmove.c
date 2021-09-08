/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:21:59 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:21:59 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*new_dst;
	const char	*new_src;

	new_dst = (char *)dst;
	new_src = (const char *)src;
	if (new_dst == 0 && new_src == 0)
		return (NULL);
	if (new_dst <= new_src)
	{
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		while (len--)
			new_dst[len] = new_src[len];
	}
	return (dst);
}
