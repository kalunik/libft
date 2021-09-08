/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:21:26 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 13:21:26 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	num_len(int num)
{
	size_t	len;

	len = 0;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*nbr_fill(int n, char *nbr, size_t len, int sign)
{
	nbr[len] = '\0';
	while (len-- > 0)
	{
		nbr[len] = n % 10 + '0';
		if (n > 0)
			n /= 10;
	}
	if (sign == -1)
		nbr[0] = '-';
	return (nbr);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	sign = 0;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	len = num_len(n);
	if (len == 0)
		return (NULL);
	if (sign == -1)
		len++;
	nbr = (char *)malloc((len + 1) * sizeof(char));
	if (nbr == NULL)
		return (NULL);
	nbr_fill(n, nbr, len, sign);
	return (nbr);
}
