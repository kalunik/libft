/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:22:32 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/30 13:05:54 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	segments(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = 0;
	while (s[j])
	{
		while (s[j] != c && s[j])
		{
			j++;
			len++;
		}
		while (s[j] == c && s[j])
			j++;
		if (len > 0)
		{
			i++;
			len = 0;
		}
	}
	return (i);
}

static size_t	elem_size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

void	*leak_case(size_t num_segment, char **arr)
{
	size_t	i;

	i = 0;
	while (i < num_segment)
		free(arr[i++]);
	free(arr);
	return (NULL);
}

static char	**arr_fill(char const *s, char c, size_t num_segment, char **arr)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (i < num_segment)
	{
		while (*s == c)
			s++;
		len = elem_size(s, c);
		arr[i] = malloc((len + 1) * sizeof(char));
		if (arr[i] == NULL)
			return (leak_case(num_segment, arr));
		j = 0;
		while (j < len)
			arr[i][j++] = *s++;
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	num_segment;
	char	**arr;

	if (!s)
		return (NULL);
	num_segment = segments(s, c);
	arr = malloc((num_segment + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr = arr_fill(s, c, num_segment, arr);
	return (arr);
}
