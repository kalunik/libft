/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:22:43 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:22:43 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	len;

	len = ft_strlen(s1);
	buf = (char *)malloc((len + 1) * sizeof (char));
	if (buf == NULL)
		return (NULL);
	ft_strlcpy(buf, s1, len + 1);
	return (buf);
}
