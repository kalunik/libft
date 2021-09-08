/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:23:07 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:23:07 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
